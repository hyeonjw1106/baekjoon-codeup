#include <stdio.h>

int rev(int n);

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    int result = rev(rev(x) + rev(y));
    printf("%d", result);
    
    return 0;
}

int rev(int n) {
    int result = 0;
    while (n > 0) {
        result = result * 10 + n % 10;
        n /= 10;
    }
    return result;
}

