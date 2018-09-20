#include <stdio.h>

void matrixmult(int n, const int A[][3], const int B[][3], int C[][3]);

int main()
{
    int A[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[][3] = {{5, 7, 3}, {1, 0, 7}, {9, 3, 6}};
    int C[3][3];
    matrixmult(3, A, B, C);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void matrixmult(int n, const int A[][3], const int B[][3], int C[][3])
{
    int i, j, k;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            C[i][j] = 0;
            for(k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}