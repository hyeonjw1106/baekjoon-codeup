#include <stdio.h>

int dp[31][31];

int comb(int n, int r) {
    if (dp[n][r] > 0) return dp[n][r];
    if (r == 0 || n == r) return dp[n][r] = 1;
    return dp[n][r] = comb(n - 1, r - 1) + comb(n - 1, r);
}

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        printf("%d\n", comb(m, n));
    }

    return 0;
}