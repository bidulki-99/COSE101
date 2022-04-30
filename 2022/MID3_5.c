#include <stdio.h>

int main() {
    char pw[100] = {0};
    int check[8] = {0, 1, 0, 0, 0, 0, 0, 1};
    scanf("%s", pw);

    int length = 0;
    while (pw[length])
        length++;

    if (9 <= length && length <= 20)
        check[2]++;

    for (int i = 0; i < length; i++) {
        if ('a' <= pw[i] && pw[i] <= 'z')
            check[3]++;
        else if ('A' <= pw[i] && pw[i] <= 'Z')
            check[4]++;
        else if ('0' <= pw[i] && pw[i] <= '9')
            check[5]++;
        else if (pw[i] == '!' || pw[i] == '@' || pw[i] == '#')
            check[6]++;
        else
            check[1]--;
        
        if (i >= 2 && pw[i] == pw[i-1] && pw[i-1] == pw[i-2])
            check[7]--;
    }

    int correct = 1;

    for (int i = 1; i <= 7; i++) {
        if (check[i] <= 0 && i != 3) {
            printf("%d", i);
            correct = 0;
        }
        else if (check[i] < 2 && i == 3) {
            printf("3");
            correct = 0;
        }
    }

    if (correct == 1)
        printf("0");    
}
