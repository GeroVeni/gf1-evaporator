% function [opt_pos, opt_neg] = binsrc(sig_id, start_pos, start_neg)
% consts;

steps = zeros(1, 8);
hi = start_pos;
lo = 0;
while abs(hi-lo) > 10^(-2)
    steps(step_id) = (hi + lo) / 2;
    
    % Runs a check to see if there are any ss error / saturations
    err_found = checkres(steps);
    
    if (err_found)
        % Doesnt work => decrease gain
        hi = steps(step_id);
    else
        lo = steps(step_id);
    end
end
out_pos = lo;

steps = zeros(1, 8);
hi = start_neg;
lo = 0;
while abs(hi-lo) > 10^(-2)
    steps(step_id) = (hi + lo) / 2;
    
    % Runs a check to see if there are any ss error / saturations
    err_found = checkres(steps);
    
    if (err_found)
        % Doesnt work => decrease gain
        hi = steps(step_id);
    else
        lo = steps(step_id);
    end
end
out_neg = lo;
