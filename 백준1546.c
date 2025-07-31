#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    double scores[1000];
    double max = 0.0;

    for (int i = 0; i < n; i++) {
        scanf("%lf", &scores[i]);
        if (scores[i] > max) {
            max = scores[i];
        }
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += (scores[i] / max) * 100.0;
    }

    double average = sum / n;
    printf("%lf\n", average);

    return 0;
}
