err_found = 0;

[t,x,y]=sim('controlled_process_parameterised');

% Check saturated values
sigs = [y(:, out_saturated), x(:, state_saturated)];
names = [out_names(out_saturated), state_names(state_saturated)];
for id = 1:length(names)
    if id == 6
        continue
    end
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
