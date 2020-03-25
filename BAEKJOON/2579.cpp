#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int dp[300];
int stair[300];

int DP(int n)
{
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &stair[i]);
    }
    cout << DP(n) << endl;
    return 0;
}