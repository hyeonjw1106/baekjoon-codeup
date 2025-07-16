#include<stdio.h>

int main(void) {
    long long n;
    int i;
    long long memo[1000001] = {0,1,};
    scanf("%lld", &n);
    for(i=2; i<=n; i++) {
        memo[i] = (memo[i-1] + memo[i-2]) % 1000000007;
    }

    printf("%lld", memo[n]);
    return 0;
}