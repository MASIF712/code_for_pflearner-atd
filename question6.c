#include <stdio.h>
int digit(int n,int k)
{int kth;
for(int i=0;i<k;i++)
{
    kth=n%10;
    n=n/10;
}

return kth;
}
int main(void)
{
int kth1=digit(829,1);
printf("kth value is : %d\n",kth1);
int kth2=digit(829,2);
printf("kth value is : %d\n",kth2);
int kth3=digit(829,3);
printf("kth value is : %d\n",kth3);


    return 0;
}