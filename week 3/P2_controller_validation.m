% this file performs a check on the  P2 -> F200 controller to ensure it is
% still fairly optimal.
% be sure to disable ONLY the P2 controller


% steady-state state guess
X0 = [25,50.5,194.7,1,208,2,0,0,0];
% steady-state input guess
U0 = [10,2,5,40,194.7,50,25,208];
% obtain real steady-state conditions with fixed input
[X,U,Y,DX] = trim('process_L2_PI_saturated_ports',X0',U0',[],[],[1;2;3;4;5;6;7;8],[]);

% obtain linearised model about equilibrium
[procA1,procB1,procC1,procD1] = linmod('process_L2_PI_saturated_ports',X,U);

% extract 8th col of B (F200 in) and 2nd row of C (P2 output), and (8,2)
% element of D (F200->P2)
Bnew = procB1(:,8);
Cnew = procC1(2,:);
Dnew = procD1(2,8);

% set up single-input single-output linearised system:
% open-loop -P_2.error -> P_2
sys1 = ss(procA1,-Bnew,Cnew,Dnew);
% plot margin for open-loop system
% margin(sys1)


% initialise transfer function variable
s = tf('s');
% linearised system transfer function
G_tf = -Cnew*inv(s*eye(9) - procA1)*Bnew;
%margin(G_tf)

% set up controller transfer function
omega = double(q_req)*i;
syms T_i;
k_p = 780.8209;
T_i = 14.1049;

% controller tranfer function
K_tf = k_p * (1 + 1/(s*T_i_req));
margin(K_tf*G_tf)
