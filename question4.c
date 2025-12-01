#include <stdio.h>
int day_of_year(int month, int day, int year)
{
    int days;
    days = day + month * 30 + year * 12 * 30;
    return days;
}
int main(void)
{
    int year, month, day;
    printf(" enter year : ");
    scanf("%d", &year);
    printf(" enter month : ");
    scanf("%d", &month);
    printf(" enter day : ");
    scanf("%d", &day);
    int days = day_of_year(month, day, year);

    printf(" days in %d year %d month and %d day will become :  %d days", year, month, day, days);

    return 0;
}