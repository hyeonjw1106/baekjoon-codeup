#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    char names[n][101];
    int days[n], months[n], years[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", names[i], &days[i], &months[i], &years[i]);
    }
    int youngest = 0, oldest = 0;
    for (int i = 1; i < n; i++) {
        if (years[i] > years[youngest] || (years[i] == years[youngest] && months[i] > months[youngest]) || (years[i] == years[youngest] && months[i] == months[youngest] && days[i] > days[youngest])) {
            youngest = i;
        }
        if (years[i] < years[oldest] || (years[i] == years[oldest] && months[i] < months[oldest]) || (years[i] == years[oldest] && months[i] == months[oldest] && days[i] < days[oldest])) {
            oldest = i;
        }
    }
    printf("%s\n%s\n", names[youngest], names[oldest]);
    return 0;
}
