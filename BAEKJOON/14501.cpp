#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
#define MAX 16
int T[MAX] = {0};
int P[MAX] = {0};

int solution(int N)
{
    int temp_sum = 0;
    int DP[N + 1] = {0};
    DP[0] = 0;
    DP[T[0]] = P[0];

    for (int i = 1; i < N; i++)
    {
        if (N - i >= T[i]) //실현 가능한지
        {
            DP[i] = max(DP[i - 1], DP[i]);
            DP[i + T[i]] = max(DP[i + T[i]], DP[i] + P[i]);
        }
    }

    return *max_element(DP, DP + N + 1);
}

int main()
{
    int N, t1, t2;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &T[i], &P[i]);
    }
    cout << solution(N) << endl;
}