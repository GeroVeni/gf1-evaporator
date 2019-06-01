global rhoA M UA2

for rhoA = 10:10:40,
    for M = 15:5:25,
        for UA2 = 5:1:8,
            [t,x,y]=sim('process_ss');
            %'UA2=',num2str(UA2),'rhoA=',num2str(rhoA),'M=',num2str(M)
            labelname = sprintf('UA2 = %d, rhoA = %d, M = %d',UA2,rhoA,M);
            label = labelname;
            plot(t,y(:,4),'DisplayName',label)
            legend 
            hold on
        end
    end
end