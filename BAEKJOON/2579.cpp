#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int dp[300];
int stair[300];

int DP(int n)
{
    int cnt = 0;
    int tmp = 0;
    int i = 0;
    while (i + 2 <= n)
    {
        if ((i + 1 == n) || (i + 2 == n))
        {
            if (cnt < 3)
                tmp += max(stair[i + 1], stair[i + 2]);
            else
                tmp += stair[i + 2];
            break;
        }
        else if (cnt < 3) //연속해서 올라간 게 아니라면
        {
            if (stair[i + 1] > stair[i + 2])
            {
                tmp += stair[i + 1];
                i++;
            }
            else if (stair[i + 1] > stair[i + 2])
            {
                tmp += stair[i + 2];
                i += 2;
            }
            cnt++;
        }
        else //연속해서 올라갔다면
        {
            tmp += stair[i + 2];
            i += 2;
            cnt = 0;
        }
    }
    return tmp;
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