#include <stdio.h>

int main(void) {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    a %= b;  

    for (int i = 0; i < n - 1; i++) {
        a = (a * 10) % b;
    }
    a = (a * 10) / b;
    printf("%d\n", a);

    return 0;
}
