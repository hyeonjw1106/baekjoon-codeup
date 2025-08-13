#include <stdio.h>

int main(void) {
    int n;
    int arr[50];
    int temp, min_missing = 4;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] - arr[i] < 5) {
                count++;
            } else {
                break;
            }
        }
        int missing = 5 - count;
        if (missing < min_missing) {
            min_missing = missing;
        }
    }

    printf("%d\n", min_missing);
    
    return 0;
}