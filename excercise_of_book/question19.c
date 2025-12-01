#include<stdio.h>
void pb(int n)
{
    if(n!=0){
        pb(n/2);
        putchar('0'+n%2);
    }
}
int main()
{
int number;
printf(" enter a number for mystry funciton : ");
scanf("%d",&number);
pb(number);
printf("\n\n so , you seen this mystry function convert our decimal number in to its binary ");

    return 0;
}