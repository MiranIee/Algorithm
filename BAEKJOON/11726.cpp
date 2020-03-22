#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int dp[1001];

int DP(int n)
{
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = (dp[i - 2] + dp[i - 1]) % 10007;
    }
    return dp[n];
}

int main()
{
    int n;
    scanf("%d", &n);
    cout << DP(n) << endl;
    return 0;
}