#include <stdio.h>
#include <string.h>

int main(void) {
	int n;
	char name[151][31];
	char first[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int cnt[27] = { 0, };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", name[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 27; j++) {
			if (name[i][0]==first[j]) {
				cnt[j]++;
			}
		}
	}

	int flag = 1;
	for (int i = 0; i < 27; i++) {
		if (cnt[i] >= 5) {
			printf("%c", first[i]);
			flag = 0;
		}
	}
	if (flag == 1) {
		printf("PREDAJA");
	}
	return 0;
}
