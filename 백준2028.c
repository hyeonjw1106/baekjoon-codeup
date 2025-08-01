#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);

        int d = 0;
        int temp = n;
        while (temp > 0) {
            temp /= 10;
            d++;
        }

        int mod_val = 1;
        for (int i = 0; i < d; i++) {
            mod_val *= 10;
        }

        int square = n * n;
        if (square % mod_val == n) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
