#include <stdio.h>
#define x 3
#define y 3
void transpose(int matrix[x][y], int a, int b, int result[x][y])
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            result[i][j] = matrix[j][i];
        }
    }
    return;
}
int main(void)
{
    int matrix[x][y];
    printf("Enter elements of matrix row by row :\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int result[x][y];
    transpose(matrix, x, y, result);
    printf("\n the transports of matrix is \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}