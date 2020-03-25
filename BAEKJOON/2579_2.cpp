#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int dp[300][2];
int stair[300];

int DP(int n)
{ //0은 1칸, 1는 2칸
    dp[0][0] = stair[0];
    dp[1][0] = stair[0] + stair[1];
    dp[1][1] = stair[1];

    for (int i = 2; i < n; i++)
    { //연속되면 안되는 경우
        dp[i][0] = max(dp[i][0], dp[i - 1][1] + stair[i]);
        dp[i][1] = max({dp[i][1], dp[i - 2][0] + stair[i], dp[i - 2][1] + stair[i]});
    }

    return (dp[n - 1][0] > dp[n - 1][1] ? dp[n - 1][0] : dp[n - 1][1]);
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