#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < b) {
        printf("A %d %d %d", (b - a) / 3600, ((b - a) % 3600) / 60, (b - a) % 60);
    }

    else if (a > b) {
        printf("B %d %d %d", (a - b) / 3600, ((a - b) % 3600) / 60, (a - b) % 60);
    }

    else
        printf("-1");   
}
