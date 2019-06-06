function [err_found, sat_vals, cont_vals] = checkres(steps)

err_found = 0;

consts;
[t,x,y]=sim('controlled_process_parameterised');

% Check saturated values
% Append states to outputs (4out4state)
sigs = [y(:, out_saturated), x(:, state_saturated)];
names = [out_names(out_saturated), state_names(state_saturated)];
% Remove flows ?
flows = [2,4,6,7];
sat_vals = zeros(1, length(names));
for id = 1:length(names)
%     if ismember(id, flows)
%         continue
%     end
    sig = sigs(:, id);
    name = names(id);
    err = outsatlims(sig, sat_lims(id));
    sat_vals(id) = err;
    if (err ~= 0) && ~ismember(id, flows)
        disp(name + " saturation error " + sat_lims(id))
        err_found = 1;
    end
end

% Check controlled values
offsets = [steps(8), steps(7), steps(6)];
cont_vals = zeros(4, length(controlled));
for id = 1:length(controlled)
    sig = y(:, controlled(id));
    ss = ss_vals(id);
    [ss_err, os, set_time, avg_freq] = metrics(t, sig, 500, ss, ss + offsets(id));
    cont_vals(:, id) = [ss_err, os, set_time, avg_freq];
    if (ss_err ~= 0)
        err_found = 1;
        disp(out_names(controlled(id)) + " ss error: " + ss_err)
    end
end
