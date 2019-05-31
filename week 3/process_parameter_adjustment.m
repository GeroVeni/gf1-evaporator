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
rho_A = 20
M = 20
UA2 = 6.84

%% 

