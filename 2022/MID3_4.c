#include <stdio.h>

int main() {
    char a[1000] = {0};
    char b[1000] = {0};
    int a_count[26] = {0};
    int b_count[26] = {0};
    int count = 0;

    scanf("%s", a);
    scanf("%s", b);

    for (int i = 0; a[i] != 0; i++)
        a_count[a[i] - 'a']++;
    for (int i = 0; b[i] != 0; i++)
        b_count[b[i] - 'a']++;

    int none = 1;
    for (int i = 0; i < 26; i++)
        if (a_count[i] != 0 && b_count[i] != 0) {
            none = 0;
            break;
        }
    
    if (none == 1) {
        printf("-1");
        return 0;
    }

    for (int i = 0; i < 26; i++)
        count += a_count[i] > b_count[i] ? a_count[i] - b_count[i] : b_count[i] - a_count[i];
    
    printf("%d", count);
}
