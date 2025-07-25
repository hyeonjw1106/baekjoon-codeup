#include <stdio.h>

int main(void) {
    int n, m, count = 0;
    scanf("%d %d", &n, &m);

    char castle[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %c", &castle[i][j]);
        }
    }

    int row = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (castle[i][j] == 'X') {
                break;
            }
            if (j == m - 1) {
                row++;
            }
        }
    }

    int col = 0;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (castle[i][j] == 'X') {
                break;
            }
            if (i == n - 1) {
                col++;
            }
        }
    }

    if (row > col) count = row;
    else count = col;

    printf("%d", count);
    return 0;
}