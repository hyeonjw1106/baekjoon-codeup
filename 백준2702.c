#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main(void) {
    int t, a, b, g;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);

        g = gcd(a, b);
        printf("%d %d\n", (a * b) / g, g);
    }

    return 0;
}
