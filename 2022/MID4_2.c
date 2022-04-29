#include <stdio.h>
int main() {
    int x, max = -999999999, count = 0;
    int a[123] = {0, };

    while (1) {
        scanf("%d", &x);
        if (x == 0)
            break;
            
        if (max <= x && count) {
            max = x;
            a[count] = max;
        }
        count++;
    }

    printf("%d\n", max);
    for (int i = 0; i < 100; i++) {
        if (a[i] == max)
            printf(" %d", i);
    }
}
