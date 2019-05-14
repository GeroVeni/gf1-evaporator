% Linearisation of evaporator model

% Linearise model about (X2,P2) = (1,25,50.5) 
% and (F1,F2,X1,T1,P100,F3,T200,F200) = (10,2,5,40,194.7,50,25,208)
[evapA1,evapB1,evapC1,evapD1] = linmod('process',[1,25,50.5],[10,2,5,40,194.7,50,25,208]);

% Extract state poles
eigA1 = eig(evapA1);
% 
% % Linearise model about (X2,P2) = (25,50.5) 
% % and (F1,F2,X1,F5,Q100,T1) = (10,1,1,1,1,1)
% [evapA2,evapB2,evapC2,evapD2] = linmod('evaporator',[25,50.5],[10,1,1,1,1,1]);
% 
% % Extract state poles
% eigA2 = eig(evapA2);