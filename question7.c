#include <stdio.h>
int f(int a, int b)
{
    //...
    // return;
}
int main(void)
{
    int i;
    double x;
    i = f(83, 12);
    printf("%d\n", i); //  legal
    x = f(83, 12);
    printf("%.2lf\n", x); //  legal
    i = f(3.15, 9.28);
    printf("%d\n", i); //  legal
    x = f(3.15, 9.28);
    printf("%.2lf\n", x); //  legal
    f(83, 12);
    printf("%d", f(83, 12)); // legal

    return 0;
}