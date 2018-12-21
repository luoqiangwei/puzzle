#include <iostream>
#include <cstring>

using namespace std;

#define min(x, y) ((x) < (y) ? (x) : (y))
#define MAXN 5

int solve(char str[], int n)
{
    int dp[MAXN][MAXN];
    memset(dp, 0, sizeof dp);
    for(int len = 1; len < n; len++)
    {
        for(int i = 0; i < n - len; i++)
        {
            int j = i + len;
            if(str[i] == str[j])
            {
                dp[i][j] = dp[i+1][j-1];
            }
            else
            {
                dp[i][j] = min(dp[i][j-1], dp[i+1][j]) + 1; 
            }
        }
    }
    return dp[0][n-1];
}

int main(int argc, char const *argv[])
{
    char s[] = "Ab3bd";
    cout << solve(s, strlen(s)) << endl;
    return 0;
}
