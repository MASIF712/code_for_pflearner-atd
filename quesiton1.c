#include <stdio.h>
int sum(int a, int b)
{

    return a + b;
}
float avg(int a, int b)
{
    return sum(a, b) / 2.0;
}
int main(void)
{
    int a, b;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);
    printf(" the average of number %d and %d is : %.2lf", a, b, avg(a, b));

    return 0;
}