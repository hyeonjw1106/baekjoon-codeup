#include <stdio.h>

int main(void) {
    int S1, S2, S3;
    scanf("%d %d %d", &S1, &S2, &S3);

    int maxSum = S1 + S2 + S3;
    int count[100] = {0};

    for (int i = 1; i <= S1; i++) {
        for (int j = 1; j <= S2; j++) {
            for (int k = 1; k <= S3; k++) {
                count[i + j + k]++;
            }
        }
    }

    int result = 0;
    int maxCount = 0;
    for (int sum = 3; sum <= maxSum; sum++) {
        if (count[sum] > maxCount) {
            maxCount = count[sum];
            result = sum;
        }
    }

    printf("%d\n", result);
    
    return 0;
}
