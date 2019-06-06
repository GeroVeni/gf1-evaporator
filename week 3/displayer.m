rho_As = 10:10:40;
Ms = 15:5:25;
UA2s = 5:8;

% names = [];
% for id1 = 1:length(rho_As)
%     for id2 = 1:length(Ms)
%         for id3 = 1:length(UA2s)
%             names = [names, "rhoA="+rho_As(id1)+",M="+Ms(id2)+",UA2="+UA2s(id3)];
%         end
%     end
% end
% paramlabels = names
consts;
in_names = ["F1", "F2", "X1", "P100", "F200", "L2 s.p.", "P2 s.p.", "X2 s.p."];
con_names = out_names(controlled);
cnt = 1;
colors = zeros(1, 48);
for id1 = 1:length(rho_As)
    for id2 = 1:length(Ms)
        for id3 = 1:length(UA2s)
            colors(cnt) = 1 + mod(cnt - 1, 4);
            cnt = cnt + 1;
        end
    end
end
palette=[[31, 119, 180]; [255, 127, 14]; [44, 160, 44]; [214, 39, 40]] / 255;

figure(2)
subplt_id = 1;
for step_id = 1:8
    for con_id = 1:3
        subplot(8, 3, subplt_id);
        subplt_id = subplt_id + 1;
        vals = [];
        for id1 = 1:length(rho_As)
            for id2 = 1:length(Ms)
                for id3 = 1:length(UA2s)
                    avg_os = CON_STATS(id1, id2, id3, step_id, 2, 4, con_id);
                    avg_os = max([avg_os, 0]);
                    vals = [vals, avg_os];
                end
            end
        end
        sep = 16;
        ticks = [[1:12], sep + [1:12], 2*sep + [1:12], 3*sep + [1:12]];
        b = bar(ticks,  vals, 'FaceColor', 'flat');
        title(con_names(con_id) + " (step on " + in_names(step_id) + ")")
        for id = 1:48
            b.CData(id, :) = palette(colors(id), :);
        end
    end
end
