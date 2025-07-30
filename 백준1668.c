#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int trophy[50];
    for (int i = 0; i < n; i++) {
        scanf("%d", &trophy[i]);
    }

    int left_count = 1;
    int max_left = trophy[0];
    for (int i = 1; i < n; i++) {
        if (trophy[i] > max_left) {
            left_count++;
            max_left = trophy[i];
        }
    }

    int right_count = 1;
    int max_right = trophy[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (trophy[i] > max_right) {
            right_count++;
            max_right = trophy[i];
        }
    }

    printf("%d\n%d\n", left_count, right_count);

    return 0;
}
