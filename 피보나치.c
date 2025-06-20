#include<stdio.h>

int fibo(int n);

int main(void) {
    int num;
    scanf("%d", &num);
    printf("%d", fibo(num));

    return 0;
}


int fibo(int n) {
    int a = 0, b = 1;
    for(int i=0; i<n-1; i++) {
        int temp = a+b;
        a = b;
        b = temp;
    }
    return b;
}
