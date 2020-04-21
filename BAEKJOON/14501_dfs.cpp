#include <iostream>
#include <stdio.h>
using namespace std;
#define MAX 16

int T[MAX] = {0};
int P[MAX] = {0};
int N;
int ans;
void DFS(int i, int sum)
{
    if (i == N)
    {
        ans = sum;
        return;
    }
    DFS(i + 1, sum);   //건너뛸경우
    if (N - i >= T[i]) //실현 가능한지
    {
        DFS(i + T[i], sum + P[i]);
    }
}

int main()
{
    int t1, t2;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &T[i], &P[i]);
    }
    DFS(0, 0);
    cout << ans << endl;

    return 0;
}