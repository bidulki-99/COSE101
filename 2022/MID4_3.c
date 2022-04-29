#include <stdio.h>
int main() {
    int x, y, temp;
    int max = -2147483648, min = 2147483647;
    
    while (1) {
        int count = 0;
        scanf("%d", &x);
        if (x == 0)
            break;
        
        temp = x;
        while (x > 0) {
            temp *= 10;
            temp += x % 10;
            x /= 10;
        }
        
        if (temp > max)
            max = temp;
        if (temp < min)
            min = temp;
            
        printf(" %d", temp);
        while (temp) {
            if (temp % 10 == 5)
                count++;
            temp /= 10;
        }
        printf(" %d", count);
    }
    printf("\n%d %d", min, max);
}
