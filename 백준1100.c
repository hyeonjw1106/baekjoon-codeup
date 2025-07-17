#include <stdio.h>

int main(void) {
	char chessboard[9][9];
	int cnt = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%s", chessboard[i]);
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0 && chessboard[i][j] == 'F')
				cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}