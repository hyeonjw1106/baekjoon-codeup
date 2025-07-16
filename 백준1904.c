#include <stdio.h>
 
int main(void){
    int n;
    scanf("%d", &n);
 
    int num[n];
    num[0] = 1;
    if(n>1){
        num[1] = 2;
        for(int i=2; i<n; i++){
            num[i] = (num[i-2] + num[i-1])%15746;
        }
    }
 
    printf("%d\n", num[n-1]);
}