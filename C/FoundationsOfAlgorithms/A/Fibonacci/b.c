// 动态规划 dynamic programming approach
#include <stdio.h>

int fib(int n);

int main()
{
    printf("%d\n", fib(25));

    return 0;
}

int fib(int n)
{
    int store[n+1];
    store[0] = 0;
    if (n > 0)
    {
        store[1] = 1;
        for(int i = 2; i < n + 1; i++)
        {
            store[i] = store[i-1] + store[i-2];
        }
    }
    return store[n];
}