#include <stdio.h>

int main(void) {
    long long n, l, w, h;
    scanf("%lld %lld %lld %lld", &n, &l, &w, &h);

    double low = 0, high = l > w ? (l > h ? l : h) : (w > h ? w : h);
    double mid;

    for (int i = 0; i < 10000; i++) {
        mid = (low + high) / 2.0;
        if ((long long)(l / mid) * (long long)(w / mid) * (long long)(h / mid) >= n)
            low = mid;
        else
            high = mid;
    }

    printf("%.10f\n", low);
    
    return 0;
}
