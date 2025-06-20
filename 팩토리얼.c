#include<stdio.h>
int fact(int n);


int main(void) {
    int u;
    scanf("%d", &u);
    printf("%d", fact(u));

}

int fact(int n) {
    int result = 1;
    for(int i=n; i>0; i--) {
        result = result * i;
    }
    return result;
}