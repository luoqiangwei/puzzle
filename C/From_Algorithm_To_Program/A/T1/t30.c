#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    clock_t start = clock();
    
    int i = 0;
    int n = 66;
    int j = 1;
    while(j <= n / 2)
    {
        i = 1;
        while(i <= j)
        {
            printf("%d%d", j, i);
            i++;
        }
        j++;
    }

    clock_t end = clock();
    printf("\nAll Time is %f s\n", (end - start) / 1000.0);

    return 0;
}