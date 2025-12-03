#include<stdio.h>
#include"matrix.h"
int main(void)
{
    int m, n;
    printf("ENTER number of rows : ");
    scanf("%d", &m);
    printf("ENTER number of cols : ");
    scanf("%d", &n);
    int matrix[m][n];
    fillMatrix_By_User(m,n,matrix);
    PrintMatrix(m,n,matrix);
    int A[m][n],B[m][n],R[m][n];
    fillMatrix_By_User(m,n,A);
    fillMatrix_By_User(m,n,B);
    AddMatrix(m,n,A,B,R);
    PrintMatrix(m,n,R);

    return 0;
}