function outlims = outsatlims(x, lim)

% Make anonymous function for approximate equals
etol = 10^(-3);
appr = @(v, u) abs(v-u) < etol;
appre = @(v, u, e) abs(v-u) < e;
apprp = @(v, u) abs(v-u) < etol * u;
apprpe = @(v, u, p) abs(v-u) < p * u;

M = max(x);
m = min(x);
if (M > lim) || (m < 0)
    outlims = 1;
    return;
elseif apprp(M, lim)
    outlims = 1;
    return;
elseif appr(m, 0)
    outlims = 1;
    return;
end
outlims = 0;