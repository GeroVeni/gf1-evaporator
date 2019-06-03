% Generate sample signal
N = 1000;
t = linspace(0, 2000, N);
x = ones(size(t));
xs = 10 * ones(size(t));
for i = 1:N
    if t(i) < 500
        continue
    end
    dt = t(i) - 500;
    x(i) = x(i) - sin(dt / 10) * exp(-dt / 40);
    xs(i) = 1 + xs(i) + sin(dt / 10) * exp(-dt / 40);
end
plot(t, x)

% Find 10% mark
setpt = N;
ss_val = x(N);
os = max(x) - ss_val;
for i = N:-1:1
    delta = abs(x(i) - ss_val);
    if delta > 0.01 * os
        setpt = i;
        break;
    end
end

% Count number of peaks and troughs
tstart = 500;
tset = t(setpt);
statpts = [];
for i = 2:(N-1)
    if t(i-1) < tstart || t(i+1) > tset
        continue
    end
    err = (x(i) - x(i-1)) * (x(i) - x(i+1));
    if err >= 0
        statpts = [statpts, i];
    end 
end
hold on;
scatter(t(statpts), x(statpts));
hold off;
diff(t(statpts))
avgt = mean(diff(t(statpts)))
avgf = 1 / (2*avgt)