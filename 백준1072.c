#include <stdio.h>

int main() {
    long long x, y;
    scanf("%lld %lld", &x, &y);

    long long z = (y * 100) / x;
    if (z >= 99) {
        printf("-1\n");
        return 0;
    }

    long long left = 1;
    long long right = 1000000000;
    long long answer = -1;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long new_z = ((y + mid) * 100) / (x + mid);

        if (new_z > z) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    printf("%lld\n", answer);
    return 0;
}
