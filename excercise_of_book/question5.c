#include <stdio.h>
int num_degit(int n)
{
    int digit = 0;
    while (n != 0)
    {
        n = n / 10;
        digit++;
    }
    return digit;
}
int main(void)
{
    int number = 712;
    printf(" enter number : ");
    scanf("%d", &number);
    int digit = num_degit(number);
    printf(" numebr %d have digit %d \n", number, digit);
    return 0;
}