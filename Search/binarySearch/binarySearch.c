#include "binarySearch.h"

key binarySearch(key *a, key x, key low, key high)
{
    key mid = (low + high) / 2;
    if (low > high)
    {
        return 0;
    }
    else{
        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] > x)
        {
            return binarySearch(a, x, low, mid - 1);
        }
        else
        {
            return binarySearch(a, x, mid + 1, high);
        }
    }
}