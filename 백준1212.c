#include <stdio.h>
#include <string.h>

int main(void) {
    char oct[333334];
    scanf("%s", oct);

    int len = strlen(oct);

    for (int i = 0; i < len; i++) {
        int num = oct[i] - '0';

        if (i == 0) {
            if (num == 0) {
                printf("0");
            } else if (num == 1) {
                printf("1");
            } else if (num == 2) {
                printf("10");
            } else if (num == 3) {
                printf("11");
            } else if (num == 4) {
                printf("100");
            } else if (num == 5) {
                printf("101");
            } else if (num == 6) {
                printf("110");
            } else if (num == 7) {
                printf("111");
            }
        }

        else {
            printf("%03d", (num >> 2) * 100 + ((num >> 1) & 1) * 10 + (num & 1));
        }
    }
    return 0;
}