#include "compare.h"

int intGreater(int x, int y)
{
    return x - y;
}

int charGreater(char x, char y)
{
    return x - y;
}

int floatGreater(float x, float y)
{
    if(x - y > 0)
    {
        return 1;
    }
    else if(x - y < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int doubleGreater(double x, double y)
{
    if(x - y > 0)
    {
        return 1;
    }
    else if(x - y < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
