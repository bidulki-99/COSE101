#include <stdio.h>

int is_leap_year(int n) {
    return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0) ? 1 : 0;
}

int main() {
    int general_date[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int leap_date[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month, day;
    int count = 1;

    scanf("%d %d %d", &year, &month, &day);

    while (count < 1000) {
        count += is_leap_year(year) ? leap_date[month++] : general_date[month++];
        if (month == 13) {
            month = 1;
            year++;
        }
    }

    while (count > 1000) {
        count--;
        day--;
        if (day == 0) {
            day = is_leap_year(year) ? leap_date[--month] : general_date[--month];
            if (month == 0) {
                month = 12;
                year--;
            }
        }
    }

    printf("%d %d %d", year, month, day);
}
