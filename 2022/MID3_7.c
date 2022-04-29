#include <stdio.h>

int main() {
    char s[100] = {0};
    scanf("%s", s);

    int check[10] = {0};
    for (int i = 0; s[i] != 0; i++) {
        if (i == 0 || s[i-1] != s[i])
            check[s[i] - 'A']++;
    }
    for (int i = 0; i < 10; i++)
        if (check[i] >= 2) {
            printf("0");
            return 0;
        }
    printf("1");
}
