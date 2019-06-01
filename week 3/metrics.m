function [ss_err, overshoot, set_time, avg_freq] = metrics(t, x, start_time, init_val, set_val)

% Make anonymous function for approximate equals
etol = 10^(-3);
appr = @(v, u) abs(v-u) < etol;
appre = @(v, u, e) abs(v-u) < e;
apprp = @(v, u) abs(v-u) < etol * u;
apprpe = @(v, u, p) abs(v-u) < p * u;

% Compute size of t and x
N = numel(t);
if (N ~= numel(x))
    error('Vectors t and x should be the same length.')
end

% Find if there is any steady-state error
if apprp(x(N), set_val)
    ss_err = 0;
else
    ss_err = x(N) - set_val;
    return;
end

% Find overshoot function
% i.e. the function used to compute the overshoot
% depending on the case
if init_val == set_val
    os_func = @(ind) (x(ind) - set_val) / set_val;
else
    os_func = @(ind) (x(ind) - set_val) / (set_val - init_val);
end

% Make function that finds is a point is stationary
isstat = @(ind) (x(ind) - x(ind-1)) * (x(ind) - x(ind+1)) >= 0;

% Find overshoot
peak_found = 0;
overshoot = 0;
p = 0;
for i = 2:N-1
    if t(i-1) < start_time
        continue
    end
    if ~peak_found && isstat(i)
        peak_found = 1;
    end
    if peak_found && overshoot < abs(os_func(i))
        overshoot = abs(os_func(i));
        p = i;
    end
end

plot(t, os_func(1:N))
hold on,
scatter([t(p)], [overshoot])
hold off;


% Find settle time
set_pt = N;
for i = N:-1:1
    if abs(os_func(i)) > 0.01 * overshoot
        set_pt = i;
        break;
    end
end
hold on,
scatter(t(set_pt), os_func(set_pt))
hold off
set_time = t(set_pt) - start_time;

% Find time points of peaks and troughs
stat_pts = [];
for i = 2:(N-1)
    if t(i-1) < start_time || t(i+1) > t(set_pt)
        continue
    end
    if isstat(i)
        stat_pts = [stat_pts, i];
    end 
end
hold on;
scatter(t(stat_pts), os_func(stat_pts));
hold off;

% Estimate average oscilation frequency
avgt = mean(diff(t(stat_pts)));
avg_freq = 1 / (2*avgt);
