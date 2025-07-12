#include <stdio.h>

int main(void) {
    int n, f, plus_count = 0;
    scanf("%d", &n);
    scanf("%d", &f);

    n = (n / 100) * 100;

    for (int j = n; j % f != 0; j++) {
        plus_count++;
    }

    printf("%02d\n", plus_count);

    return 0;
}