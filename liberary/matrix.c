#include<stdio.h>
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