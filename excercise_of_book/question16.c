#include <stdio.h>
int factorial = 1;
int fact(int n)
{
    if (n <= 1)
    {
        return factorial;
    }
    factorial = n * fact(n - 1);
}
int main(void)
{
    int number = 4;
    printf("factorial of %d! is : %d\n", number, fact(number));

    return 0;
}