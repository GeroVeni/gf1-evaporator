function [err_found] = checkres()

err_found = 0;

consts;
[t,x,y]=sim('gain_schedule_integral_state_feedback');

% Check saturated values
% Append states to outputs (4out3state)
sigs = [y(:, out_saturated)];
names = [out_names(out_saturated)];
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
% for id = 1:length(controlled)
%     sig = y(:, controlled(id));
%     ss = ss_vals(id);
%     [ss_err] = metrics(t, sig, ss);
%     if (ss_err ~= 0)
%         err_found = 1;
%         disp(out_names(controlled(id)) + " ss error: " + ss_err)
%     end
% end
