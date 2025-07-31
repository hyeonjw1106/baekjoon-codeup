#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int price[50], delivery[50];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &price[i], &delivery[i]);
    }

    int max_profit = 0;
    int best_price = 0;

    for (int i = 0; i < n; i++) {
        int sell_price = price[i];
        int profit = 0;

        for (int j = 0; j < n; j++) {
            if (price[j] >= sell_price && sell_price > delivery[j]) {
                profit += sell_price - delivery[j];
            }
        }

        if (profit > max_profit) {
            max_profit = profit;
            best_price = sell_price;
        } else if (profit == max_profit && sell_price < best_price) {
            best_price = sell_price;
        }
    }

    printf("%d\n", max_profit > 0 ? best_price : 0);
    return 0;
}
