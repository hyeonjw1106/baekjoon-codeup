#include <stdio.h>

int main(void) {
    int arr[5];
    int count = 0;
    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
	
    for (int result = 1; ; result++){
        for (int i = 0; i < 5; i++){		
            if (result % arr[i] == 0) count++;	 
        }
        if (count >= 3){	
            printf("%d", result);
            break;
        }
        else count = 0;
    }
    
    return 0;
}