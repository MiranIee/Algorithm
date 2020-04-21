#include <iostream>
#include <stdio.h>
using namespace std;
#define MAX 16

int T[MAX] = {0};
int P[MAX] = {0};
int N;

int DFS(int i, int sum)
{
    if (i == N)
        retrun sum;
}

int main()
{
    int t1, t2;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &T[i], &P[i]);
    }
    cout << DFS(0, 0) << endl;
}