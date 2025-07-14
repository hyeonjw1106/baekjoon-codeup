#include <stdio.h>

int main(void) {
    int n, a_count = 1, b_count = 0, temp;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        temp = b_count;
        b_count += a_count;
        a_count = temp;
    }

    printf("%d %d", a_count, b_count);
    return 0;
}
