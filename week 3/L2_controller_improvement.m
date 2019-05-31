% This file manages the linearisation and calulations relating to the
% system with a L2 -> F2 PI controller under testing.

% NB: ALL controllers must be disabled when this script is run


% steady-state state guess
X0 = [25,50.5,194.7,1,208,2,0,0,0];
% steady-state input guess
U0 = [10,2,5,40,194.7,50,25,208];
% obtain real steady-state conditions with fixed input
[X,U,Y,DX] = trim('process_L2_PI_saturated_ports',X0',U0',[],[],[1;2;3;4;5;6;7;8],[]);

% obtain linearised model about equilibrium
[procA1,procB1,procC1,procD1] = linmod('process_L2_PI_saturated_ports',X,U);

% extract 2nd col of B (F2 in) and 6th row of C (L2 output), and (2,6)
% element of D (F2->L2)
Bnew = procB1(:,2);
Cnew = procC1(6,:);
Dnew = procD1(6,2);

% set up single-input single-output linearised system:
% open-loop -L_2.error -> L_2
sys1 = ss(procA1,-Bnew,Cnew,Dnew);
% plot margin for open-loop system
% margin(sys1)


% initialise symbolic variable
syms q;
% linearised system transfer function (as a symbolic equation)
G_tf_sym = -Cnew*inv(q*i*eye(9) - procA1)*Bnew;
% initialise transfer function variable
s = tf('s');
% linearised system transfer function
G_tf = -Cnew*inv(s*eye(9) - procA1)*Bnew;
% margin(G_tf)

% now we want to find the maximum possible phase margin achievable for the
% L2 PI controller
d_ds_G_tf_sym = diff(angle(G_tf_sym));
% solve system for q where d_ds(angle(G_tf))==0
q_req = vpasolve(d_ds_G_tf_sym== 0,q,0.75)
% get the required proportional gain to shift the 0 dB to this point.
% ie to get phase margin as max achievable
q = q_req; % 0.7616/s
k_p = double(1/abs(subs(G_tf_sym))) % 22.6247


% now build a linear system with this gain imposed
sys2= ss(procA1, -k_p*Bnew,Cnew,Dnew);
% margin(sys2)

% now we recalculate the required T_i in order to apply the 5 degree lag at
% this frequency

% set up controller transfer function
omega = double(q_req)*i;
syms T_i;

% setup controller transfer function
control_tf = angle((T_i*omega + 1)/(omega*T_i));
% solve with an initial close guess (this avoids complex solns)
T_i_req = double(vpasolve(control_tf==-0.087266,T_i,12)) % 15.0082


% controller tranfer function (to check system is optimised)
K_tf = k_p * (1 + 1/(s*T_i_req));
margin(K_tf*G_tf)
