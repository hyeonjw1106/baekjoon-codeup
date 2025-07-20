#include <stdio.h>

int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main(void) {
    int x, y, c;
    
    scanf("%d", &c);
    
    for(int i = 0; i < c; i++) {
        scanf("%d %d", &x, &y);
        printf("%d\n", x * y / gcd(x, y));
    }
    
    return 0;
}