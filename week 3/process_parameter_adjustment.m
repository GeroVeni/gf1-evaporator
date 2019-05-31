% this file tests the process under a range of system parameters and
% determines the robustness of the response

% setup system parameters (with initial values)
rho_A = 20
M = 20
UA2 = 6.84

[t,x,y]=sim('controlled_process_parameterised')

