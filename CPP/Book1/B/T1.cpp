#include <iostream>

using namespace std;

// 暴力破解法
int fun1()
{
    int sum = 0;
    for(int i = 1; i <= 100 / 1; i++)
    {
        for(int j = 1; j <= 100 / 2; j++)
        {
            for(int k = 1; k <= 100 / 5; k++)
            {
                if(i * 1 + j * 2 + k * 5 == 100)
                {
                    cout << "一分: " << i << "，二分： " << j << "，五分：" << k << endl;
                    sum++;
                }
            }
        }
    }
    return sum;
}


int main(int argc, char const *argv[])
{
    cout << "-----------fun1------------" << endl;
    cout << "总方法数为：" << fun1() << endl;
    return 0;
}
