% this file performs a check on the  X2 -> P200 controller to ensure it is
% still fairly optimal.
% be sure to disable ONLY the X2 controller


% steady-state state guess
X0 = [25,50.5,194.7,1,208,2,0,0,0];
% steady-state input guess
U0 = [10,2,5,40,194.7,50,25,208];
% obtain real steady-state conditions with fixed input
[X,U,Y,DX] = trim('process_L2_PI_saturated_ports',X0',U0',[],[],[1;2;3;4;5;6;7;8],[]);

% obtain linearised model about equilibrium
[procA1,procB1,procC1,procD1] = linmod('process_L2_PI_saturated_ports',X,U);

% extract 5th col of B (P100 in) and 1st row of C (X2 output), and (5,1)
% element of D (P100->X2)
Bnew = procB1(:,5);
Cnew = procC1(1,:);
Dnew = procD1(1,5);

% set up single-input single-output linearised system:
% open-loop -X_2.error -> X_2
sys1 = ss(procA1,-Bnew,Cnew,Dnew);
% plot margin for open-loop system
%margin(sys1)


% set up transfer function variable
s = tf('s');
% linearised system transfer function
G_tf = -Cnew*inv(s*eye(9) - procA1)*Bnew;

% controller tranfer function
K_p = 4.9364
T_i = 8.7713
K_tf = K_p * (1 + 1/(s*T_i));

margin(K_tf*G_tf)
