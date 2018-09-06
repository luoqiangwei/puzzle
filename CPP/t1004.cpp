#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int* year = new int[1000];
	for(int i = 0; i < 1000; i++)
	{
		cin >> year[i];
		if(year[i] == 0)
		{
			num = i;
			break;
		}
	}
	int* result = new int[55];
	result[0] = 1;
	result[1] = 2;
	result[2] = 3;
	for(int i = 3; i < 55; i++)
	{
		result[i] = result[i-1] + result[i-3];
	}
	for(int i = 0; i < num; i++)
	{
		cout << result[year[i] - 1] << endl;
	}
	delete []year;
	delete []result;
}
