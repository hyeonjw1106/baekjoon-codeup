#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int div = 10;

        while (div <= n) {
            if (n % div >= div / 2) {
                n += div;
            }
            n -= (n % div);
            div *= 10;
        }
        
        printf("%d\n", n);
    }
    
    return 0;
}