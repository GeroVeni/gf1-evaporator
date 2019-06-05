% initialise process model name
process_model = 'process_state_ports';

%% produce open-loop linearisations at 5 X2 set-points (15,20,25,30,35)
% steady-state input
Ug = [2,194.7,208];
% 'steady-state' states
X1g = [15,50.5,1];
X2g = [20,50.5,1];
X3g = [25,50.5,1];
X4g = [30,50.5,1];
X5g = [35,50.5,1];

[X1,U1,Y,DX] = trim(process_model,X1g',Ug',[],[1;2;3],[],[]);
[X2,U2,Y,DX] = trim(process_model,X2g',Ug',[],[1;2;3],[],[]);
[X3,U3,Y,DX] = trim(process_model,X3g',Ug',[],[1;2;3],[],[]);
[X4,U4,Y,DX] = trim(process_model,X4g',Ug',[],[1;2;3],[],[]);
[X5,U5,Y,DX] = trim(process_model,X5g',Ug',[],[1;2;3],[],[]);

% obtain linearised models about each 'equilibrium'
[A1,B1,C1,D1] = linmod(process_model,X1,U1);
[A2,B2,C2,D2] = linmod(process_model,X2,U2);
[A3,B3,C3,D3] = linmod(process_model,X3,U3);
[A4,B4,C4,D4] = linmod(process_model,X4,U4);
[A5,B5,C5,D5] = linmod(process_model,X5,U5);

% build extended A and B matricies
A1_ext = [[A1,zeros(3)];
         [eye(3),zeros(3)]];
B1_ext = [B1;zeros(3)];
A2_ext = [[A2,zeros(3)];
         [eye(3),zeros(3)]];
B2_ext = [B2;zeros(3)];
A3_ext = [[A3,zeros(3)];
         [eye(3),zeros(3)]];
B3_ext = [B3;zeros(3)];
A4_ext = [[A4,zeros(3)];
         [eye(3),zeros(3)]];
B4_ext = [B4;zeros(3)];
A5_ext = [[A5,zeros(3)];
         [eye(3),zeros(3)]];
B5_ext = [B5;zeros(3)];



%% optimising control using LQR
% setup Q and R weight matricies (we assume these are the same for all set
% points)
% Q = [[10,0,0,0,0,0];
%      [0,10,0,0,0,0];
%      [0,0,10,0,0,0];
%      [0,0,0,1,0,0];
%      [0,0,0,0,1,0];
%      [0,0,0,0,0,1]];
% R = [[1,0,0];
%      [0,1,0];
%      [0,0,1]];

% generate KL matricies
KL1 = lqr(A1_ext,B1_ext,Q,R);
KL2 = lqr(A2_ext,B2_ext,Q,R);
KL3 = lqr(A3_ext,B3_ext,Q,R);
KL4 = lqr(A4_ext,B4_ext,Q,R);
KL5 = lqr(A5_ext,B5_ext,Q,R);
% separate K and L matricies
K1_opt = KL1(1:3,1:3);
L1_opt = KL1(1:3,4:6);
K2_opt = KL2(1:3,1:3);
L2_opt = KL2(1:3,4:6);
K3_opt = KL3(1:3,1:3);
L3_opt = KL3(1:3,4:6);
K4_opt = KL4(1:3,1:3);
L4_opt = KL4(1:3,4:6);
K5_opt = KL5(1:3,1:3);
L5_opt = KL5(1:3,4:6);

%% open-loop linearisation using v_dot as a new state, placing [K,L] poles
% define K poles L poles
%P = [[-0.0491 + 0.0028i, -0.0491 - 0.0028i, -0.0887],[-0.01,-0.01,-0.01]];
P = [[-0.1, -0.1, -0.1],[-0.05, -0.05, -0.05]];
% place for KL matricies
KL1 = place(A1_ext,B1_ext,P);
KL2 = place(A2_ext,B2_ext,P);
KL3 = place(A3_ext,B3_ext,P);
KL4 = place(A4_ext,B4_ext,P);
KL5 = place(A5_ext,B5_ext,P);
% separate K and L matricies
K1_int = KL1(1:3,1:3);
L1_int = KL1(1:3,4:6);
K2_int = KL2(1:3,1:3);
L2_int = KL2(1:3,4:6);
K3_int = KL3(1:3,1:3);
L3_int = KL3(1:3,4:6);
K4_int = KL4(1:3,1:3);
L4_int = KL4(1:3,4:6);
K5_int = KL5(1:3,1:3);
L5_int = KL5(1:3,4:6);

%% Matrix interpolation construction (with optimised control)
% K_interp(:,:,1) = K1_opt;
% K_interp(:,:,2) = K2_opt;
% K_interp(:,:,3) = K3_opt;
% K_interp(:,:,4) = K4_opt;
% K_interp(:,:,5) = K5_opt;
% L_interp(:,:,1) = L1_opt;
% L_interp(:,:,2) = L2_opt;
% L_interp(:,:,3) = L3_opt;
% L_interp(:,:,4) = L4_opt;
% L_interp(:,:,5) = L5_opt;

%% Matrix interpolation construction (with pole placed control)
K_interp(:,:,1) = K1_int;
K_interp(:,:,2) = K2_int;
K_interp(:,:,3) = K3_int;
K_interp(:,:,4) = K4_int;
K_interp(:,:,5) = K5_int;
L_interp(:,:,1) = L1_int;
L_interp(:,:,2) = L2_int;
L_interp(:,:,3) = L3_int;
L_interp(:,:,4) = L4_int;
L_interp(:,:,5) = L5_int;

