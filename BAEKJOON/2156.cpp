#include <iostream>
#include <stdio.h>
#include <algorithm>
#define MAX 10000
using namespace std;

int grape[MAX];
int dp[MAX][2];
//0은 연속해서, 1은 한칸 뛰어서

int DP(int n)
{
    dp[0][0] = grape[0];
    dp[1][0] = dp[0][0] + grape[0];
    dp[1][1] = grape[1];

    for (int i = 2; i < n; i++)
    {
        dp[i][0] = max(dp[i][0], dp[i - 1][1] + grape[i]);
        dp[i][1] = max({dp[i][1], dp[i - 2][0] + grape[i], dp[i - 2][1] + grape[i]});
    }
    return 0;
}

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", grape[i]);
    }
    cout << DP(N) << endl;
}