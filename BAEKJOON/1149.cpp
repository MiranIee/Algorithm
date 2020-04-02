#include <iostream>
#include <stdio.h>
#include <algorithm>
#define MAX 1000
using namespace std;

int RGB[MAX][3]; //0 RED 1 GREEN 2 BLUE
int dp[MAX][3];

int DP(int n)
{
    dp[0][0] = RGB[0][0];
    dp[0][1] = RGB[0][1];
    dp[0][2] = RGB[0][2];

    for (int i = 1; i < n; i++)
    {
        dp[i][0] = min(dp[i - 1][1] + RGB[i][0], dp[i - 1][2] + RGB[i][0]);
        dp[i][1] = min(dp[i - 1][0] + RGB[i][1], dp[i - 1][2] + RGB[i][1]);
        dp[i][2] = min(dp[i - 1][1] + RGB[i][2], dp[i - 1][0] + RGB[i][2]);
    }
    int temp = dp[n - 1][0] > dp[n - 1][1] ? (dp[n - 1][1] > dp[n - 1][3] ? dp[n - 1][3] : dp[n - 1][1]) : (dp[n - 1][2] > dp[n - 1][3] ? dp[n - 1][3] : dp[n - 1][1]);
    cout << temp << endl;
    return (dp[n - 1][0] > dp[n - 1][1] ? (dp[n - 1][1] > dp[n - 1][3] ? dp[n - 1][3] : dp[n - 1][1]) : (dp[n - 1][2] > dp[n - 1][3] ? dp[n - 1][3] : dp[n - 1][1]));
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &RGB[i][j]);

    cout << DP(n) << endl;

    return 0;
}