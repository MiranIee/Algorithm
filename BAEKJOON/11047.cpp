#include <iostream>
#include <stdio.h>
#include <algorithm>
#define MAX 10
using namespace std;

int coin[MAX];

int greedy(int n, int k)
{
    int i = n - 1;
    int answer = 0;
    int cnt = 0;

    while (k != 0 && i >= 0)
    {
        if (k - coin[i] >= 0)
        {
            for (cnt = 1; k - cnt * coin[i] >= 0; cnt++)
            {
            }
            k -= (cnt - 1) * coin[i];
            answer += (cnt - 1);
        }
        i--;
    }

    return answer;
}

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++)
        scanf("%d", &coin[i]);

    cout << greedy(N, K) << endl;

    return 0;
}