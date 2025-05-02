#include <stdio.h>

int main() {
    int years, months, days, totalDays, totalHours;

    printf("Enter number of years: ");
    scanf("%d", &years);

    printf("Enter number of months: ");
    scanf("%d", &months);

    printf("Enter number of days: ");
    scanf("%d", &days);

    totalDays = (years * 365) + (months * 30) + days;
    totalHours = totalDays * 24;

    printf("Total hours = %d\n", totalHours);
    return 0;
}

