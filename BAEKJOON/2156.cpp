#include <iostream>
#include <stdio.h>
#include <algorithm>
#define MAX 10000
using namespace std;

int grape[MAX];
int dp[MAX];
//0은 연속해서, 1은 한칸 뛰어서

int DP(int n)
{
    dp[0] = 0;
    dp[1] = grape[1];
    dp[2] = grape[1] + grape[2];

    for (int i = 3; i <= n; i++)
    {
        dp[i] = max({dp[i - 1], dp[i - 2] + grape[i], dp[i - 3] + grape[i - 1] + grape[i]});
    }
    return dp[n];
}

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &grape[i]);
    }
    cout << DP(N) << endl;
}