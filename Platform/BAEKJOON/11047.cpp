#include <iostream>
#include <stdio.h>
#include <algorithm>
#define MAX 10
using namespace std;

int coin[MAX];

int greedy(int n, int k)
{
    int answer = 0;
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (k == 0)
            break;
        answer += k / coin[i];
        k -= coin[i] * (k / coin[i]);
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