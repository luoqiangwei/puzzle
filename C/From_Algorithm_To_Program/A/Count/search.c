#include "search.h"

int linearSearch(void* a, int size, int n, void* x, int(*comp)(void*, void*))
{
    int i = 0;
    while(i < n)
    {
        if(comp((char*)a + i * size, x) == 0)
        {
            return i;
        }
        i++;
    }
    return -1;
}