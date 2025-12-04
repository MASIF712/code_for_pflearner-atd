#include <stdio.h>
#define x 3
#define y 3
void matrix_multiply(int A[x][y], int B[x][y], int result[x][y])
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < x; k++)
                result[i][j] += A[i][k] * B[k][j];
        }
    }
}
int main(void)
{
    int A[x][y] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[x][y] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int R[x][y] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    // printf("%d",R[1][2]);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n     x    \n\n\n");
    for (int i1 = 0; i1 < x; i1++)
    {
        for (int j1 = 0; j1 < y; j1++)
        {
            printf("%3d ", B[i1][j1]);
        }
        printf("\n");
    }
    matrix_multiply(A, B, R);
    printf("\n the multiplyed matrix  as result is \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%3d ", R[i][j]);
        }
        printf("\n");
    }

    return 0;
}