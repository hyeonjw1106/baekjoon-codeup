#include <stdio.h>
#include <string.h>

int main(void) {
    char a[82], b[82], result[83]; 
    scanf("%s %s", a, b);

    int lenA = strlen(a);
    int lenB = strlen(b);

    int i = lenA - 1;
    int j = lenB - 1;
    int k = 0;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    int start = k - 1;

    while (start > 0 && result[start] == '0') {
        start--;
    }

    for (int idx = start; idx >= 0; idx--) {
        printf("%c", result[idx]);
    }
    printf("\n");

    return 0;
}
