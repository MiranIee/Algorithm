#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int dp[10000000];

int DP(int n)
{

    for (int i = 2; i <= n; i++)
    {
        if (!dp[i])
        {
        }
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
}