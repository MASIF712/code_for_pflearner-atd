#include <stdio.h>
double ATM(int balance)
{
    int amount = 10000;
    return amount + balance;
}
int main(void)
{
    int amount;
    printf("enter amount :  ");
    scanf("%d", &amount);
    double balance = ATM(amount);
    printf(" Your account have balance $%.2lf ", balance);

    return 0;
}