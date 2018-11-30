#include <iostream>
#include <math.h>
#include <map>

using namespace std;
#define N 400

// O(n4)
int fun1(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            for(int k = 1; k <= n; k++)
            {
                for(int l = 1; l <= n; l++)
                {
                    if(i * i + j * j == k * k + l * l)
                    {
                        sum++;
                    }
                }
            }
        }
    }
    return sum;
}

// O(n3)
int fun2(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            for(int k = 1; k <= n; k++)
            {
                if(i * i + j * j - k * k > 0)
                {
                    int d = (int)(sqrt(i * i + j * j - k * k) + 0.5);
                    if(d <= n && i * i + j * j == k * k + d * d)
                    {
                        sum++;
                    }
                }
            }
        }
    }
    return sum;
}


// O(n2)
int fun3(int n)
{
    int sum = 0;
    map<int, int> mymap;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            int x = i * i + j * j;
            mymap[x]++;
        }
    }
    for(int c = 1; c <= n; c++)
    {
        for(int d = 1; d <= n; d++)
        {
            int y = c * c + d * d;
            if(mymap[y])
                sum += mymap[y];
        }
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    cout << "个数为：" << fun1(N) << endl;
    cout << "个数为：" << fun2(N) << endl;
    cout << "个数为：" << fun3(N) << endl;
    return 0;
}
