#include <stdio.h>
#include <string.h>

int main(void) {
    char num[11];
    scanf("%s", num);

    int len = strlen(num);

    for (int i = 0; i < len - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < len; j++) {
            if (num[j] > num[max_idx]) {
                max_idx = j;
            }
        }
    
        char temp = num[i];
        num[i] = num[max_idx];
        num[max_idx] = temp;
    }

    printf("%s\n", num);
    return 0;
}
