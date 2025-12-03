#include <stdio.h>
void fillMatrix_By_User(int rows, int cols, int matrix[rows][cols])
{   printf(" \nenter all elements one by one :\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf(" for index[%d][%d] = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void PrintMatrix(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void AddMatrix(int rows, int cols, int A[rows][cols], int B[rows][cols], int result[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}
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