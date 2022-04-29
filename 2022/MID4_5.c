#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = i*(i+1) / 2 + 1; j < (i+1)*(i+2) / 2; j++) {
            printf("%4d", j);
        }
        for (int j = (i+1)*(i+2) / 2; j > i*(i+1) / 2; j--) {
            printf("%4d", j);
        }
        printf("\n");
    }
}
