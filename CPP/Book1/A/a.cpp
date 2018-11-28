#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int &x, int &y)
{
    return x > y;
}

int main(int argc, char const *argv[])
{
    int a[10] = {2, 5, 8, 6, 3, 7, 1, 9, 4, 10};
    vector <int> vec(a, a + 10);
    cout << "size:" << vec.size() << endl;
    cout << "正在输出 vec : ";
    vector<int>::iterator it, it1;
    for(it = vec.begin(); it != vec.end(); ++it)
        cout << *it << " ";
    cout << endl;
    int x = 6;
    it1 = find(vec.begin(), vec.end(), x);
    if(it1 != vec.end())
        cout << "查到元素" << *it1 << endl;
    else
        cout << "没有找到元素" << x <<endl;
    cout << "递减排序" << endl;
    sort(vec.begin(), vec.end(), cmp);
    vector<int>::reverse_iterator rit;
    cout << "反向输出 vec:";
    for(rit = vec.rbegin(); rit != vec.rend(); rit++)
        cout << *rit << " ";
    cout << endl;
    return 0;
}
