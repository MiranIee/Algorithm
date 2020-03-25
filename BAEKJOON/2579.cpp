#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int dp[300 + 2];
int stair[300];

int DP(int n)
{
    int cnt = 0;
    bool chk = false;

    for (int i = 0; i < n; i++)
    {
        dp[i] = dp[i] + stair[i + 2];
        if (cnt < 3) //연속해서 밟지 않은 경우
        {
            if (!chk)
                cnt++;
            else
                cnt = 0;

            dp[i] = max(dp[i], dp[i] + stair[i + 1]);
            chk = false;
        }
        else //연속해서 밟았다면
        {
            chk = true;
            cnt = 0;
        }
    }
    return dp[n];
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