#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    int price[1000];
    for (int i = 0; i < m; i++) {
        scanf("%d", &price[i]);
    }

    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (price[i] < price[j]) {
                int temp = price[i];
                price[i] = price[j];
                price[j] = temp;
            }
        }
    }

    int max_profit = 0;
    int best_price = 0;

    for (int i = 0; i < m; i++) {
        int sell_price = price[i];
        int buyer_count = i + 1;

        if (buyer_count > n)
            buyer_count = n;

        int profit = sell_price * buyer_count;

        if (profit > max_profit) {
            max_profit = profit;
            best_price = sell_price;
        }
    }

    printf("%d %d\n", best_price, max_profit);

    return 0;
}
