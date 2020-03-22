#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

pair<int, int> dp[40];

void DP(int n)
{
    dp[0] = make_pair(1, 0);
    dp[1] = make_pair(0, 1);
    dp[2] = make_pair(1, 1);
    for (int i = 3; i <= n; i++)
    {
        dp[i].first = dp[i - 1].first + dp[i - 2].first;
        dp[i].second = dp[i - 1].second + dp[i - 2].second;
    }
}

int main()
{
    int N, n;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        memset(dp, (0, 0), sizeof(dp));
        scanf("%d", &n);
        DP(n);
        cout << dp[n].first << " " << dp[n].second << endl;
    }

    return 0;
}