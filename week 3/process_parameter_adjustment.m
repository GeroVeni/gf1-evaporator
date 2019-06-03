% this file tests the process under a range of system parameters and
% determines the robustness of the response

%% GENERAL APPROACH
% for a given set of system parameters (rho_A, M, UA2)
% Apply set-point (L2, X2, P2) or certain input (F1, X1, P100, F200, ...) 
% step change @ time 500
% check if expected steady-state value is reached. If not, system is not
% controlled and step size is too large
% also check if ANY output or state values reach saturation value as this
% also implies lack of control
% reduce step size until system is controlled (ie maximum step)

% calculate maximum relative overshoot
% calculate settling time (time to 1% of overshoot)
% calculate average oscillation frequency
% for all relevant outputs (probably just (L2, X2, P2))
% repeat for 50% of max step


%% PARAMETER SETUP
% setup system parameters (with initial values)
rho_A = 20;
M = 20;
UA2 = 6.84;

%% 

out_names = ["X2", "P2", "T2", "T3", "F4", "L2", "T100", "Q100", "F100", "Q200", "T201", "F5"];
controlled = [1, 2, 6];
out_saturated = [2, 5, 6, 12];
state_names=["X2", "P2", "P100", "L2", "F200", "F2_nolag", "F200_nolag", "P100_nolag", "F2"];
state_saturated = [3, 5, 9];
% Saturation limits correspond to saturated outputs concatenated with
% saturated states
ss_vals = [25, 50.5, 1];
sat_lims = [100, 16, 2, 16, 400, 416, 4];

for rho_A = 10:10:40
    for M = 15:5:25
        for UA2 = 5:8
            ...
        end
    end
end

% [t,x,y]=sim('controlled_process_parameterised');
% % Check controlled values
% sig = y(:, 2);
% 
% 
% % Check saturated values
% sig = x(:, 5);
% err = outsatlims(sig, 416)