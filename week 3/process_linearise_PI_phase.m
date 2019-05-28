% Week 3 linearise

% steady-state state guess
X0 = [25,50.5,194.7,1,208,2,0,0];

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

% set up a range of systems
sys1 = ss(procA1,-Bnew,Cnew,Dnew);
margin(sys1)

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
G_tf = -Cnew*inv(s*eye(8) - procA1)*Bnew

% controller tranfer function
K_tf = K_p * (1 + 1/(s*18.924));

% margin(K_tf*G_tf)