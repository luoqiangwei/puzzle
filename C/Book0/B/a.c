#include <stdio.h>

// O(n3)
int fun1(int *A, int num, int *left, int *right)
{
    *left = 0;
    *right = 0;
    int maxSum = A[0];
    for (int i = 0; i < num; i++)
    {
        for (int j = i; j < num; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += A[k];
            }
            if (sum > maxSum)
            {
                maxSum = sum;
                *left = i;
                *right = j;
            }
        }
    }
    return maxSum;
}

// O(n2)
int fun2(int *A, int num, int *left, int *right)
{
    *left = 0;
    *right = 0;
    int maxSum = A[0];
    for (int i = 0; i < num; i++)
    {
        int sum = 0;
        for (int j = i; j < num; j++)
        {
            sum += A[j];
            if (sum > maxSum)
            {
                maxSum = sum;
                *left = i;
                *right = j;
            }
        }
    }
    return maxSum;
}

// O(n)
int fun3(int *A, int num, int *left, int *right)
{
    *left = 0;
    *right = 0;
    int maxSum = A[0];
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += A[i];
        if(sum < 0)
        {
            sum = 0;
            *left = i + 1;
        } 
        if(sum > maxSum)
        {
            maxSum = sum;
            *right = i;
        }
    }
    return maxSum;
}

int main(int argc, char const *argv[])
{
    int left = 0;
    int right = 0;
    int A[] = {-2, 11, -4, 13, -5, -2};
    int B[] = {-6, 2, 4, -7, 5, 3, 2, -1, 6, -9, 10, -2};
    printf("fun1 : %d\n", fun1(A, sizeof A / sizeof(int), &left, &right));
    printf("fun1 : %d\n", fun1(B, sizeof B / sizeof(int), &left, &right));
    printf("fun2 : %d\n", fun2(A, sizeof A / sizeof(int), &left, &right));
    printf("fun2 : %d\n", fun2(B, sizeof B / sizeof(int), &left, &right));
    printf("fun3 : %d\n", fun3(A, sizeof A / sizeof(int), &left, &right));
    printf("fun3 : %d\n", fun3(B, sizeof B / sizeof(int), &left, &right));

    return 0;
}
