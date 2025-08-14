#include <stdio.h>

int main(void) {
    long long N;
    scanf("%lld", &N);

    N += (2400 - 2013);

    int idx12 = (N + 5) % 12;
    int idx10 = (N + 9) % 10;

    char c12 = 'A' + idx12;
    char c10 = '0' + idx10;

    printf("%c%c\n", c12, c10);
    return 0;
}