#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#define MAX 90
using namespace std;

long long dp[MAX];

int DP(int n)
{
    dp[0] = 0;
    dp[1] = 1; //1
    dp[2] = 1; //10

    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    cout << DP(n) << endl;
}