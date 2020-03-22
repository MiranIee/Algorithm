#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int dp[40];

int DP(int n)
{
    if (n == 0)
    {
    }
    else if (n == 1)
    {
    }
    else
    {
        return DP(n - 1) + DP(n - 2);
    }
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