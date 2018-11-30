#include <iostream>
#include <queue>

using namespace std;

#define MAXN 21
int n = 3;
int w[MAXN] = {0, 4, 2, 6};
double v[MAXN] = {0, 5, 2, 6};
int W = 6;

double bestx[MAXN];
int Count = 1;
typedef struct
{
    int no;
    int i;
    int w;
    double v;
    int x[MAXN];
    double ub;
} NodeType;

void disparr(int x[], int len)
{
    for(int i = 1; i <= len; i++)
    {
        cout << " " << x[i];
    }
}

void bound(NodeType &e)
{
    int i = e.i + 1;
    int sumw = e.w;
    double sumv = e.v;
    while((sumw + w[i] <= W) && i <= n)
    {
        
    }
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
