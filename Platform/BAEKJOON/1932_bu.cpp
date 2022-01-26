#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 501
int arr[MAX][MAX];
int dp[MAX][MAX];

int DP(int n)
{
    dp[0][0] = arr[0][0];

    int dp_max = dp[0][0];

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0)
                dp[i][j] = dp[i - 1][j] + arr[i][j];
            else if (j == i)
                dp[i][j] = dp[i - 1][j - 1] + arr[i][j];
            else
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];
        }
    }

    //return dp_max;
    return *max_element(&dp[n - 1][0], &dp[n - 1][n]);
}

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i + 1; j++)
            scanf("%d", &arr[i][j]);
    }

    cout << DP(N) << endl;
}