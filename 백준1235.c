#include <stdio.h>
#include <string.h>

char students[1001][101];
char suffixes[1001][101];

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", students[i]);
    }

    int len = strlen(students[0]);


    for (int k = 1; k <= len; k++) {
        for (int i = 0; i < n; i++) {
            strcpy(suffixes[i], &students[i][len - k]);
        }

        int is_unique = 1;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (strcmp(suffixes[i], suffixes[j]) == 0) {
                    is_unique = 0;
                    break;
                }
            }
            if (!is_unique) break;
        }

        if (is_unique) {
            printf("%d\n", k);
            break;
        }
    }

    return 0;
}