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
%margin(G_tf)

% solve system for q where phase = -135deg (3/4 * pi)
q_req = vpasolve(angle(G_tf_sym)== -(3/4)*pi,q)
% get the required proportional gain to shift the 0 dB to this point.
% ie to get phase margin == 45deg
q = q_req; % 0.6034/s
k_p = double(1/abs(subs(G_tf_sym))) % 14.1841


% now build a linear system with this gain imposed
sys2= ss(procA1, -k_p*Bnew,Cnew,Dnew);
%margin(sys2)

% given that the system with K_p = 14.1841 provides a phase margin of 
% 45deg, we use that value in our system.
% In order to develop a PI controller which sets the phase margin to 40deg
% at 0.93866rad/s, we set the phase of the controller to -5deg at this 
% frequency

% set up controller transfer function
omega = double(q_req)*i;
syms T_i;

% setup controller transfer function
control_tf = angle((T_i*omega + 1)/(omega*T_i));
% solve with an initial close guess (this avoids complex solns)
T_i_req = double(vpasolve(control_tf==-0.087266,T_i,12)) % 18.9314

% determine if bode plot is correct (0dB crossover @ ~0.604rad/s with phase
% margin of ~ 40deg)

% controller tranfer function
K_tf = k_p * (1 + 1/(s*T_i_req));
%margin(K_tf*G_tf)
