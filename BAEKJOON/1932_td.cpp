#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm>
using namespace std;

#define MAX 501
int arr[MAX][MAX];
int dp[MAX][MAX];

int DP(int i, int j)
{
    if (i == 1)
        return arr[1][1];
    if (arr[i][j] == -1)
        return 0;
    if (dp[i][j])
        return dp[i][j];
    dp[i][j] = max(DP(i - 1, j), DP(i - 1, j - 1)) + arr[i][j];
    return dp[i][j];
}

int main()
{
    int N, temp, max = -1;
    scanf("%d", &N);
    memset(arr, -1, sizeof(arr));
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
            scanf("%d", &arr[i][j]);
    }

    for (int i = 1; i <= N; i++)
    {
        temp = DP(N, i);
        if (temp > max)
            max = temp;
    }
    cout << max << endl;
}