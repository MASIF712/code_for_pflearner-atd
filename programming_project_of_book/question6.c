#include <stdio.h>
double polynomial(int x)
{   double y;
    y=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
    return y;
}
int main(void)
{
    int x;
printf("enter value of x = ");
scanf("%d",&x);
printf(" the solution as y = %.2lf",polynomial(x));

    return 0;
}