#include <stdio.h>
#include <string.h>

int main(void) {
    char *color_names[] = {
        "black", "brown", "red", "orange", "yellow",
        "green", "blue", "violet", "grey", "white"
    };

    int color_values[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    long long color_multipliers[] = {
        1, 10, 100, 1000, 10000,
        100000, 1000000, 10000000, 100000000, 1000000000
    };

    char color1[10], color2[10], color3[10];
    scanf("%s %s %s", color1, color2, color3);

    int i, val1 = -1, val2 = -1;
    long long multiplier = 1;

    for (i = 0; i < 10; i++) {
        if (strcmp(color1, color_names[i]) == 0) val1 = color_values[i];
        if (strcmp(color2, color_names[i]) == 0) val2 = color_values[i];
        if (strcmp(color3, color_names[i]) == 0) multiplier = color_multipliers[i];
    }

    long long result = (val1 * 10 + val2) * multiplier;
    printf("%lld\n", result);

    return 0;
}