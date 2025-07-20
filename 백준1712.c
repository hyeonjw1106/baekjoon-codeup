#include <stdio.h>

int main(void) {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (b >= c) {
        printf("-1\n");
        return 0;
    }

    long long left = 1;
    long long right = 2110000000;
    long long result = -1;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long cost = a + b * mid;
        long long revenue = c * mid;

        if (revenue > cost) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    printf("%lld\n", result);
    
    return 0;
}