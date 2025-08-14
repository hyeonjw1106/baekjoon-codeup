#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    long long sum = 0;
    int h = 0;

    while (1) {
        h++;
        sum += (long long)h * h + (long long)(h - 1) * (h - 1);
        if (sum > n) {
            printf("%d\n", h - 1);
            break;
        }
    }

    return 0;
}
