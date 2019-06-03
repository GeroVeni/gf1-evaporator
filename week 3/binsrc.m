% out_names = ["X2", "P2", "T2", "T3", "F4", "L2", "T100", "Q100", "F100", "Q200", "T201", "F5"];
% controlled = [1, 2, 6];
% out_saturated = [2, 5, 6, 12];
% state_names=["X2", "P2", "P100", "L2", "F200", "F2_nolag", "F200_nolag", "P100_nolag", "F2"];
% state_saturated = [3, 5, 9];
% % Saturation limits correspond to saturated outputs concatenated with
% % saturated states
% ss_vals = [25, 50.5, 1];
% sat_lims = [100, 16, 2, 16, 400, 416, 4];

steps = zeros(1, 8);
step_id = 8;
hi = -25;
lo = 0;
while abs(hi-lo) > 10^(-2)
    steps(step_id) = (hi + lo) / 2;
    
    % Runs a check to see if there are any ss error / saturations
    checkres;
    
    if (err_found)
        % Doesnt work => decrease gain
        hi = steps(step_id);
    else
        lo = steps(step_id);
    end
end
lo
