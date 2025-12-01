#include <stdio.h>
double tax_finder(double taxable_income)
{
    double tax=0;
    if(taxable_income<10)//condition are rough my own .
    {
        tax=0;
    }
    if(taxable_income>10&&taxable_income<10000)
    {
        tax= 12+taxable_income*0.12;
    }
    else if(taxable_income>10000&&taxable_income<=22000){
        tax=22+taxable_income*0.22;
    } else if(taxable_income>22000){
        tax=220+taxable_income*0.33;
    }
    return tax;
}
int main(void)
{
    double income;
    printf(" enter taxable income : ");
    scanf("%lf", &income);
    printf(" you have tax $%.2lf",tax_finder(income));

    return 0;
}