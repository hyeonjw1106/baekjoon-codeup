#include <stdio.h>

int main(void) {
    int e, f, c;
    int total_drink = 0;
    int bottles;

    scanf("%d %d %d", &e, &f, &c);

    bottles = e + f;

    while (bottles >= c) {
        int new_drink = bottles / c;
        total_drink += new_drink;  
        bottles = bottles % c + new_drink;
    }

    printf("%d\n", total_drink);
    
    return 0;
}
