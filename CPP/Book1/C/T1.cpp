#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;
vector<int> a;
int sum = 0;

void dispasolution()
{
    cout << "第" <<  (++sum) << "个解" << endl;
    for(int i = 0; i < a.size(); i++)
    {
        cout << "(" << i + 1 << "," << a[i] + 1 << ") ";
    }
    cout << endl;
}

bool Cond(int k, int j)
{
    if(k == 0) return true;
    for(int i = 0; i < k; i++)
    {
        if((a[i] == j) || (abs(j - a[i]) == abs(i - k)))
        {
            return false;
        }
    }
    return true;
}

void Queen(int n)
{
    bool find;
    a.push_back(-1);
    while(a.size() > 0)
    {
        int k = a.size() - 1;
        if(k == n)
        {
            dispasolution();
        }
        find = false;
        for(int j = a[k] + 1; j < n; j++)
        {
            if(Cond(k, j))
            {
                a[k] = j;
                find = true;
                break;
            }
        }
        if(find)
        {
            a.push_back(-1);
        }
        else
        {
            a.pop_back();
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    if(n > 20) return -1;
    Queen(n);
    return 0;
}
