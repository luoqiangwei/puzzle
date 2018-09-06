#include <iostream>

using namespace std;

int main()
{
	int** store	= new int[1000][2];
	int size = 0;
	for(int i = 0; i < 1000; i++)
	{
		cin >> store[i][0];
		cin >> store[i][1];
		if(store[i][0] == 0)
		{
			size = i;
			break;
		}
	}
}
