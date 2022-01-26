#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int dp[11];

int DP(int n)
{
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= n; i++)
    {
        dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
    }
    return dp[n];
}

int main()
{
    int N, n;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        memset(dp, 0, sizeof(dp));
        scanf("%d", &n);
        cout << DP(n) << endl;
    }
    return 0;
}