% Week 3 linearise14

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

% set up linearised system
sys1 = ss(procA1,-Bnew,Cnew,Dnew);

% set up transfer function variable
s = tf('s');
% linearised system transfer function
G_tf = -Cnew*inv(s*eye(9) - procA1)*Bnew


% solve transfer function frequency for phase of -135
% TODODODODOD

% we see -135deg phase @ -58dB = 
k_p = 10^(58/20) % 794.3282
sys2= ss(procA1, -k_p*Bnew,Cnew,Dnew);
margin(sys2)


% from the various systems bode plots may be generated to find phase margin

% given that the system with K_p = 14.2 provides a phase margin of 45deg,
% we use that value in our system.
% In order to develop a PI controller which sets the phase margin to 40deg
% at 0.604rad/s (found from margin plot) we set the phase of the controller
% to -5deg at this frequency

% set up controller transfer function

omega = 0.955i;
syms T_i;

% setup controller transfer function
control_tf = angle((T_i*omega + 1)/(omega*T_i));
% solve with an initial close guess (this avoids complex solns)
vpasolve(control_tf==-0.087266,T_i,18)

% determine if bode plot is correct (0dB crossover @ ~0.604rad/s with phase
% margin of ~ 40deg)

% controller tranfer function
K_tf = 794.3282 * (1 + 1/(s*11.9687));

margin(K_tf*G_tf)


%%%% zieger-nichols %%%%
K_u = 11.02;
T_u = 102.807 / 10;

K_p_X2 = K_u/2.2
T_i_X2 = T_u/1.2


%%%% L2 Gain multiplier %%%%
k_p_L2_mod = 10^(5.42/20)
%%% check system
% modified controller transfer function
K_tf_opt = k_p_L2_mod * 14.2 * (1 + 1/(s*18.924));
% margin(K_tf_opt*G_tf)
