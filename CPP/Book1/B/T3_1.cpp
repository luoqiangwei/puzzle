#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    cin >> n;
    int x = 0;
    int y = 0;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        // x = y;
        cin >> y;
        if(i == 0)
        {
            x = y;
            sum ++;
        }
        else if(x != y)
        {
            x = y;
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
