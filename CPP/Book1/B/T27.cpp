#include <iostream>
#include <queue>
using namespace std;
void bfs(int n)
{
    queue<long> queue;
    queue.push(1);
    while(!queue.empty())
    {
        long x;
        x = queue.front();
        queue.pop();
        cout << x << endl;
        if(x % n == 0)
        {
            cout << x << endl;
            return;
        }
        queue.push(x * 10);
        queue.push(x * 10 + 1);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    while(cin >> n && n)
    {
        bfs(n);
    }
    return 0;
}
