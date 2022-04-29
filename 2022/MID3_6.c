#include <stdio.h>

int main() {
    int h;
    scanf("%d", &h);

    for (int i = 1; i <= h; i++) {
        if (i == 1 || i == h) {
            for (int j = 1; j <= h; j++)
                printf("*");
            printf("\n");
        }

        else if (i <= h / 2) {
            for (int j = 1; j < i; j++)
                printf(" ");
            printf("*");
            for (int j = i+1; j <= h-i; j++)
                printf(" ");
            printf("*\n");
        }

        else if (i > h / 2) {
            for (int j = 1; j <= h-i; j++)
                printf(" ");
            for (int j = h-i+1; j <= i; j++)
                printf("*");
            printf("\n");
        }
    }
}
