#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            printf(" ");
        }
        for(int p=0; p<2*i+1; p++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1; i>0; i--) {
        for(int j=0; j<n-i; j++) {
            printf(" ");
        }
        for(int p=0; p<2*i-1; p++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}