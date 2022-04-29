#include <stdio.h>

int main() {
    int n, x, min = 2147483647;
    int a[3] = {0, };

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        a[0] += (x / 30) + 1;
        a[1] += (x / 60) + 1;
        a[2] += (x / 120) + 1;
    }

    a[0] *= 10;
    a[1] *= 15;
    a[2] *= 25;

    for (int i = 0; i < 3; i++) {
        if (min > a[i])
            min = a[i];
    }

    for (int i = 0; i < 3; i++) {
        if (min == a[i])
            printf("%c ", 'A' + i);
    }

    printf("%d", min);
}
