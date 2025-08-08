#include <stdio.h>

int check(int number, int f) {
    while (number > 0) {
        if (number % 10 == f) {
            return 1;
        }
        number /= 10;
    }
    return 0;
}

int main(void) {
    int n, l;
    scanf("%d %d", &n, &l);

    int count = 0;
    int num = 1;

    while (1) {
        if (!check(num, l)) {
            count++;
            if (count == n) {
                printf("%d\n", num);
                break;
            }
        }
        num++;
    }

    return 0;
}