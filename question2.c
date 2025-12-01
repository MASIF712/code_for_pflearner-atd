#include <stdio.h>
void PrintTable(int number)
{
    for (int i = 1; i <= 10; i++)
    {

        printf(" %d x %d = %d\n", number, i, number * i);
    }
}
int main(void)
{

    PrintTable(5);

    return 0;
}