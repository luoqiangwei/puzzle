#include <stdio.h>

int search(int x, int a[], int length)
{
	for(int i = 0; i < length; i++)
	{
		if(a[i] == x)
		{
			return i;
		}
	}
	return -1;
}


int main()
{
	int a[] = {2, 6, 8, 1, 0, 6, 3, 1, 7, 8, 4, 1, 5, 8, 4, 9, 0, 1};
	printf("%d\n", search(0, a, sizeof(a) / sizeof(int)));
	return 0;
}
