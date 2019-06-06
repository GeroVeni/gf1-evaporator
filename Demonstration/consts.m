out_names = ["X2", "P2", "T2", "T3", "F4", "L2", "T100", "Q100", "F100", "Q200", "T201", "F5"];
% controlled = [1, 2, 6];
out_saturated = [6];
state_names=["X2", "P2", "P100", "L2", "F200", "F2_nolag", "F200_nolag", "P100_nolag", "F2"];
% state_saturated = [];
% Saturation limits correspond to saturated outputs concatenated with
% saturated states
ss_vals = [25, 50.5, 1];
sat_lims = [2];