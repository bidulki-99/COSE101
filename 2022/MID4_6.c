#include <stdio.h>

int is_prime(int n) {
    for (int i = 2; i < n-1; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int next_prime(int n) {
    while (1)
        if (is_prime(++n))
            return n;
}

int main() {
    int n, count = 0;
    while (1) {
        scanf("%d", &n);
        if (n < 0)
            break;
        
        if (is_prime(n)) {
            printf("%d %d\n", n, next_prime(n));
            count++;
        }
    }

    if (count == 0)
        printf("none");
}
