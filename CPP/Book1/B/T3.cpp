#include <iostream>

using namespace std;

#define MAX 1000
int A[MAX];
int fun1(int n)
{
    int sum = 1;
    int curr = A[0];
    for(int i = 1; i < n; i++)
    {
        if(curr == A[i])
        {
            continue;
        }
        else
        {
            curr = A[i];
            sum++;
        }
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << fun1(n) << endl;
    return 0;
}
