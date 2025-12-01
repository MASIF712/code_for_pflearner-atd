#include <stdio.h>
int gcd(int m, int n)
{
    while (n != 0)
    {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}
int main(void)
{
    int a, b;
    printf(" enter first number : ");
    scanf("%d", &a);
    printf(" enter second numebr : ");
    scanf("%d", &b);
    int hcf;
    hcf = gcd(a, b);
    printf(" HCF of %d and %d is : %d", a, b, hcf);
    return 0;
}