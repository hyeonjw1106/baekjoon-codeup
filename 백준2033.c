#include <stdio.h>

int main(void) {
	long int n;
	long int i=1;

	scanf("%ld", &n);

	while (1) {
		i *= 10;
		if (n > i) {
			int p = n % i;
			if (p >= (i / 2)) {
				n += (i - p);
			}
			else {
				n -= p;
			}
		}
		else {
			printf("%ld", n);
			break;
		}
	}
    
	return 0;
}