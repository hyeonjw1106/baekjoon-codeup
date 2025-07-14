#include <stdio.h>

int rev(int n);

int main(void) {
    int n, rn;
    while(1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }else {
            rn = rev(n);
            if (rn == n) printf("yes\n");
            else printf("no\n");
        }
    }
    
    
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