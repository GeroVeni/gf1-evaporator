%% Script for calculating the closed loop poles of the basic PI controller

%% Initialisation
closed_loop_model = 'linearise_basic_pi';

%% obtain linearisation
% steady-state state
X = [25,50.5,1];
% steady-state input
U = [2,194.7,208];
% obtain linearised model about equilibrium (we assume X,U form a
% steady-state)
[A,B,C,D] = linmod(closed_loop_model,X,U);

% find closed-loop poles 
% with prop,int,sat (  -0.8333, 0, -0.227 + 0.6875i) [9 poles]
% with prop,int ( -1.3807, -0.5535 + 0.3192i, -0.5535 - 0.3192i) [6 poles]
% with prop ( -0.6242 + 0.247i, -0.6242 - 0.247i, -1.4666) [3 poles]
eig(A);