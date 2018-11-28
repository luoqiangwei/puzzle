#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    LARGE_INTEGER nFreq; //频率
    LARGE_INTEGER start;
    LARGE_INTEGER end;
    double dt;
    QueryPerformanceFrequency(&nFreq);
    QueryPerformanceCounter(&start);
    Sleep(1000);
    QueryPerformanceCounter(&end);
    dt = (end.QuadPart - start.QuadPart) / (double)nFreq.QuadPart;
    printf("\nAll Time is %20.20f s\n", dt);

    return 0;
}