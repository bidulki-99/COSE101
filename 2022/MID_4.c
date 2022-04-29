#include <stdio.h>
int main() {
    int a[100] = {0, };
    int n = 0, sum = 0, start = -1, end = -1;
    int ans_start = -1, ans_end = -1, max_sum = -2147483648, max_length = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] >= 0 && (a[i-1] < 0 || i == 0)) {
            start = i;
            sum += a[i];
        }

        else if (a[i] >= 0 && a[i-1] >= 0) {
            sum += a[i];
        }

        else if (a[i] < 0 && i > 0) {
            end = i - 1;
            if (max_sum < sum && end - start >= max_length) {
                ans_start = start;
                ans_end = end;
                max_sum = sum;
                max_length = end - start;
                sum = 0;
            }
        }
    }

    if (sum > 0 && a[n-1] >= 0) {
        sum += a[n-1];
        if (max_sum <= sum && n-1 - start >= max_length) {
                ans_start = start;
                ans_end = n-1;
        }
    }

    if (ans_start >= 0 && ans_end >= 0)
        for (int i = ans_start; i <= ans_end; i++)
            printf("%d ", a[i]);
}
