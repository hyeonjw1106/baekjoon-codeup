#include <stdio.h>

int main(void) {
    int n, l, d;
    scanf("%d %d %d", &n, &l, &d);

    int end_time = n * (l + 5) - 5;

    for (int t = d; ; t += d) {
        int found = 0;
        for (int i = 0; i < n; i++) {
            int song_start = i * (l + 5);
            int song_end = song_start + l;

            if (t >= song_end && t < song_end + 5) {
                printf("%d\n", t);
                return 0;
            }

            if (t < song_end + 5)
                found = 1;
        }
        
        if (!found) {
            printf("%d\n", t);
            return 0;
        }
    }

    return 0;
}
