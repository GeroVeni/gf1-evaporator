% setup system parameters (with initial values)
rho_A = 20;
M = 20;
UA2 = 6.84;

nominal_inputs = [10, 2, 5, 194.7, 208, 1, 50.5, 25];

max_high = zeros(1, 8);
max_low = zeros(1, 8);
for sig_id = 1:8
    disp(sig_id)
    step_id = sig_id;
    start_pos = 1500;
    start_neg = -250;
    binsrc;
    if (out_neg + nominal_inputs(sig_id) < 0)
        out_neg = - nominal_inputs(sig_id);
    end
    max_high(sig_id) = out_pos;
    max_low(sig_id) = out_neg;
end