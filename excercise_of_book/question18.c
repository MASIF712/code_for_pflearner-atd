#include <stdio.h>
int gcd(int m, int n)
{
    if (n == 0)
    {
        return m;
    }
    else
    {
        m = gcd(n, m % n);
    }
}
int main(void)
{
    int a = 66, b = 88;
    printf(" gcd of %d and %d is : %d", a, b, gcd(a, b));
    return 0;
}