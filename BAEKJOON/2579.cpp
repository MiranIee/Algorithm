#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int dp[300 + 1];
int stair[300 + 1];

int DP(int n)
{
    dp[0] = stair[0];
    dp[1] = max(stair[1], stair[0] + stair[1]);
    dp[2] = max(stair[0] + stair[2], stair[1] + stair[2]);

    for (int i = 3; i < n; i++)
    {
        dp[i] = max(dp[i - 2] + stair[i], stair[i - 1] + stair[i] + dp[i - 3]);
    }
    return dp[n - 1];
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &stair[i]);
    }
    cout << DP(n) << endl;
    return 0;
}