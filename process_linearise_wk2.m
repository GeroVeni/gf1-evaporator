% Week 2 linearise

% steady-state state guess
X0 = [25,50.5,194.7,1,208,2];

X1 = [1,25,50.5,194.7,208,2]
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
sys0 = ss(procA1,-Bnew,Cnew,Dnew);
sys2 = ss(procA1,-2*Bnew,Cnew,Dnew);
sys4 = ss(procA1,-4*Bnew,Cnew,Dnew);
sys8 = ss(procA1,-8*Bnew,Cnew,Dnew);
sys11 = ss(procA1,-11*Bnew,Cnew,Dnew);
sys14 = ss(procA1,-14*Bnew,Cnew,Dnew);
sys14_2 = ss(procA1,-14.2*Bnew,Cnew,Dnew);
sys65 = ss(procA1,-65*Bnew,Cnew,Dnew);

