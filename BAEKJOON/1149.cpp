#include <iostream>
#include <stdio.h>
#include <algorithm>
#define MAX 1000
using namespace std;

int RGB[MAX][3]; //0 RED 1 GREEN 2 BLUE
int dp[MAX];

int DP(int n)
{
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &RGB[i][j]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << RGB[i][j] << " ";
        cout << endl;
    }

    return 0;
}