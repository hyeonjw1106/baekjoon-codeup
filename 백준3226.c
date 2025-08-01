#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int total_fee = 0;
    for (int i = 0; i < n; i++) {
        int hh, mm, dd;
        scanf("%d:%d %d", &hh, &mm, &dd);

        for (int j = 0; j < dd; j++) {
            if (hh >= 7 && hh < 19) {
                total_fee += 10;
            } else {
                total_fee += 5;
            }
            mm++;
            if (mm == 60) {
                mm = 0;
                hh++;
                if (hh == 24) hh = 0;
            }
        }
    }

    printf("%d\n", total_fee);

    return 0;
}