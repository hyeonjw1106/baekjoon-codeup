#include <stdio.h>

int main(void) {
    long long n;
    scanf("%lld", &n);

    if (n == 0) { 
        printf("NO\n");
        return 0;
    }

    long long fact[21]; // 20! 까지만 (20! ≈ 2.43e18)
    fact[0] = 1;
    for (int i = 1; i <= 20; i++) {
        fact[i] = fact[i - 1] * i;
    }

    for (int i = 20; i >= 0; i--) {
        if (fact[i] <= n) {
            n -= fact[i];
        }
    }

    if (n == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
