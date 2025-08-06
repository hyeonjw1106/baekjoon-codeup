#include <stdio.h>

int main(void) {
    double a, b, c;
    double i, j, k;
    double max_cocktails;

    scanf("%lf %lf %lf", &a, &b, &c);
    scanf("%lf %lf %lf", &i, &j, &k);

    double ratio1 = a / i;
    double ratio2 = b / j;
    double ratio3 = c / k;

    max_cocktails = ratio1;
    if (ratio2 < max_cocktails) max_cocktails = ratio2;
    if (ratio3 < max_cocktails) max_cocktails = ratio3;

    printf("%.6lf %.6lf %.6lf\n",
           a - i * max_cocktails,
           b - j * max_cocktails,
           c - k * max_cocktails);

    return 0;
}