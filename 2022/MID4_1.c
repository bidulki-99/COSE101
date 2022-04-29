#include <stdio.h>
int main() {
    int a[101] = {0, };
    int x, y = 0;
    int ans;

    while (1) {
        scanf("%d", &x);
        if (a[x] == 1)
            break;
            
        a[x] = 1;
        ans += x;
        y += 1;
    }

    printf("%.2f", (float)ans / y);
}
