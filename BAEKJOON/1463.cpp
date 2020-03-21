#include <iostream>
#include <stdio.h>
using namespace std;

int cnt = 0;
int dp[10000001];

int solution(int x)
{
    dp[1] = 0;
    for (int i = 2; i <= x; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0)
            dp[i] = min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0)
            dp[i] = min(dp[i], dp[i / 3] + 1);
    }

    return dp[x];
}

int main(void)
{
    int x;
    scanf("%d", &x);
    cout << solution(x) << endl;
}