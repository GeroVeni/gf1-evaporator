 % Week 2 linearise

% steady-state state guess
X0 = [25,50.5,194.7,1,208,2];

X1 = [1,25,50.5,194.7,208,2];
% steady-state input guess
U0 = [10,2,5,40,194.7,50,25,208];

% obtain real steady-state conditions
[X,U,Y,DX] = trim('process_wk2_linearise',X0',U0',[],[],[1;2;3;4;5;6;7;8],[]);

% obtain linearised model about equilibrium
[procA1,procB1,procC1,procD1] = linmod('process_wk2_linearise',X,U);

% extract 2nd col of B (F2 in) and 6th row of C (L2 output), and (2,6)
% element of D (F2->L2)
Bnew = procB1(:,2);
Cnew = procC1(6,:);
Dnew = procD1(6,2);

% set up a range of systems
sys0_pos = ss(procA1,Bnew,Cnew,Dnew);
sys1 = ss(procA1,-Bnew,Cnew,Dnew);
sys14_2 = ss(procA1,-14.2*Bnew,Cnew,Dnew);

% model from heuristic development
sys65 = ss(procA1,-65*Bnew,Cnew,Dnew);

% from the various systems bode plots may be generated to find phase margin

% given that the system with K_p = 14.2 provides a phase margin of 45deg,
% we use that value in our system.
% In order to develop a PI controller which sets the phase margin to 40deg
% at 0.604rad/s (found from margin plot) we set the phase of the controller
% to -5deg at this frequency

% set up controller transfer function

omega = 0.604i;
K_p = 14.2;
syms T_i;

% setup controller transfer function
control_tf = angle((T_i*omega + 1)/(omega*T_i));
% solve with an initial close guess (this avoids complex solns)
vpasolve(control_tf==-0.087266,T_i,18)

% determine if bode plot is correct (0dB crossover @ ~0.604rad/s with phase
% margin of ~ 40deg)

% set up transfer function variable
s = tf('s');

% linearised system transfer function
G_tf = -Cnew*inv(s*eye(6) - procA1)*Bnew

% controller tranfer function
K_tf = K_p * (1 + 1/(s*18.924));

margin(K_tf*G_tf)