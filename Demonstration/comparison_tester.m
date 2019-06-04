%% This file allows the comparison of performance of implemented controllers
% some setup
out_names = ["X2","P2","T2","T1","F4","L2","T100","Q100","F100","Q200","T201","F5"];

%% run simulations of multiple types of system
[t,x,y]=sim('process_anti_windup_out_ports');
j = 1;
for i = 1:length(y(1,:))
    figure(1)
    sgtitle('Basic PI control')
    
    if i == 1 || i==2 || i==6    
        subplot(3,1,j)
        j = j+1;
        plot(t,y(:,i))
        %     ylim([0 2]);
        title(out_names(i));
    end
    
end

% K = K_prop;
% L = L_prop;
% [t,x,y]=sim('process_state_control_out_ports');
% j = 1;
% for i = 1:length(y(1,:))
%     figure(2)
%     sgtitle('proportional state feedback control')
%     subplot(4,3,i)
%     plot(t,y(:,i))
%     %     ylim([0 2]);
%     title(out_names(i));
% end

K = K_int;
L = L_int;
[t,x,y]=sim('process_state_control_out_ports');
j = 1;
for i = 1:length(y(1,:))
    figure(3)
    sgtitle('integral state feedback control')
    if i == 1 || i==2 || i==6    
        subplot(3,1,j)
        j = j+1;
        plot(t,y(:,i))
        %     ylim([0 2]);
        title(out_names(i));
    end
end

% K = K_opt;
% L = L_opt;
% [t,x,y]=sim('process_state_control_out_ports');
% j = 1;
% for i = 1:length(y(1,:))
%     figure(4)
%     sgtitle('optimised state feedback control')
%     if i == 1 || i==2 || i==6    
%         subplot(3,1,j)
%         j = j+1;
%         plot(t,y(:,i))
%         %     ylim([0 2]);
%         title(out_names(i));
%     end
% end

[t,x,y]=sim('process_state_ctrl_gain_schedule');
j = 1;
for i = 1:length(y(1,:))
    figure(5)
    sgtitle('gain schedules state feedback control')
    if i == 1 || i==2 || i==6    
        subplot(3,1,j)
        j = j+1;
        plot(t,y(:,i))
        %     ylim([0 2]);
        title(out_names(i));
    end
end

