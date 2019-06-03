% out_names = ["X2", "P2", "T2", "T3", "F4", "L2", "T100", "Q100", "F100", "Q200", "T201", "F5"];
% controlled = [1, 2, 6];
% out_saturated = [2, 5, 6, 12];
% state_names=["X2", "P2", "P100", "L2", "F200", "F2_nolag", "F200_nolag", "P100_nolag", "F2"];
% state_saturated = [3, 5, 9];
% % Saturation limits correspond to saturated outputs concatenated with
% % saturated states
% ss_vals = [25, 50.5, 1];
% sat_lims = [100, 16, 2, 16, 400, 416, 4];

err_found = 0;

[t,x,y]=sim('controlled_process_parameterised');

% Check saturated values
sigs = [y(:, out_saturated), x(:, state_saturated)];
names = [out_names(out_saturated), state_names(state_saturated)];
for id = 1:length(names)
    sig = sigs(:, id);
    name = names(id);
    err = outsatlims(sig, sat_lims(id));
    if (err ~= 0)
        disp(name + " saturation error " + sat_lims(id))
        err_found = 1;
    end
end

% Check controlled values
offsets = [steps(8), steps(7), steps(6)];
for id = 1:length(controlled)
    sig = y(:, controlled(id));
    ss = ss_vals(id);
    [ss_err, os, set_time, avg_freq] = metrics(t, sig, 500, ss, ss + offsets(id));
    if (ss_err ~= 0)
        err_found = 1;
        disp(out_names(controlled(id)) + " ss error: " + ss_err)
    end
end
