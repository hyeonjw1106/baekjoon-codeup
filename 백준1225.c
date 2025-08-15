#include <stdio.h>
#include <string.h>

int main(void) {
    char A[10001], B[10001];
    scanf("%s %s", A, B);

    long long sumA = 0, sumB = 0;

    for (int i = 0; A[i] != '\0'; i++) {
        sumA += A[i] - '0';
    }

    for (int i = 0; B[i] != '\0'; i++) {
        sumB += B[i] - '0';
    }

    long long result = sumA * sumB;
    printf("%lld\n", result);

    return 0;
}