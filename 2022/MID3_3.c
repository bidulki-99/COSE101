#include <stdio.h>

int make_bit(unsigned char n) {
    int count = 0, i = 8;
    while (i--) {
        if (n % 2 == 1)
            count++;
        else
            count--;

        n /= 2;
    }
    return count;
}

int main() {
    unsigned char A, B, C, D;
    int max = -9;
    scanf("%hhu %hhu %hhu %hhu", &A, &B, &C, &D);

    int a[4] = {0, };
    a[0] = make_bit(A);
    a[1] = make_bit(B);
    a[2] = make_bit(C);
    a[3] = make_bit(D);
    
    for (int i = 0; i < 4; i++) {
        if (max < a[i])
            max = a[i];
    }
    
    for (int i = 0; i < 4; i++) {
        if (max == a[i])
            printf("%c", 'A' + i);
    }
}
