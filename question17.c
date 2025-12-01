// rewrite without recursive
#include <stdio.h>
int fact(int n)
{
    int factorial=1;
    while (n >= 1)
    {
        factorial *= n--;
    }

    return factorial;
}
int main()
{
    int number = 6;
    printf(" the factorial of %d! is : %d\n", number, fact(number));
}