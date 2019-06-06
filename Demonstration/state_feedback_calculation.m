%% Script for state space controllers (proportional, integral, LQR opt)
% This file manages the linearisation and calulations relating to the
% system with a (L2, P2, X2) -> (F2, F200, P100) state feedback controller 
% under testing.

% state feedback controller in model must be disabled when running this
% script.

% initialise process model name
process_model = 'linearise_open_loop';
closed_process_model = 'linearise_prop_state_feedback';

%% open-loop linearisation, placing K matrix poles
% steady-state state
X = [25,50.5,1];
% steady-state input
U = [2,194.7,208];
% obtain linearised model about equilibrium (we assume X,U form a
% steady-state)
[A,B,C,D] = linmod(process_model,X,U);

% consider open loop poles (0, -0.0558, -0.1)
eig(A);
% use basic proportional controller closed-loop poles as a starting point
% see basic_pi_poles.m
P = [-0.6242 + 0.247i, -0.6242 - 0.247i, -1.4666];
K_prop = place(A,B,P);
L_prop = zeros(3);

% set K,L
K = K_prop;
L = L_prop;

%% closed-loop pole validation
% steady-state state guess
% X = [25,50.5,1,208,2,194.7];
X = [25,50.5,1];
% steady-state input
U = [2,194.7,208];
% obtain linearised model about equilibrium
[A,B,C,D] = linmod(closed_process_model,X,U);
% consider closed loop-poles
eig(A)

%% open-loop linearisation using v_dot as a new state, placing [K,L] poles
% steady-state state
X = [25,50.5,1];
% steady-state input
U = [2,194.7,208];
% obtain linearised model about equilibrium
[A,B,C,D] = linmod(process_model,X,U);
% build extended A and B matricies
A_ext = [[A,zeros(3)];
         [eye(3),zeros(3)]];
B_ext = [B;zeros(3)];
% define K poles L poles
P = [[-0.25,-0.25,-1],[-0.2,-0.2,-0.2]];
KL = place(A_ext,B_ext,P);
% separate K and L matricies
K_int = KL(1:3,1:3);
L_int = KL(1:3,4:6);

%% optimising control using LQR
% setup Q and R weight matricies
% Q = [[1,0,0,0,0,0];
%      [0,1,0,0,0,0];
%      [0,0,1,0,0,0];
%      [0,0,0,1,0,0];
%      [0,0,0,0,1,0];
%      [0,0,0,0,0,1]];
% R = [[1,0,0];
%      [0,1,0];
%      [0,0,1]];

[KL,S,e] = lqr(A_ext,B_ext,Q,R);
% separate K and L matricies
K_opt = KL(1:3,1:3);
L_opt = KL(1:3,4:6);





