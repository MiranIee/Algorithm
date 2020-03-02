#include <iostream>
#include <stdio.h>
#include <queue>
#define MAX 1000

using namespace std;
int map[MAX][MAX];
bool visited[MAX][MAX];
int M, N;

int main()
{
    scanf("%d %d", &M, &N);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &map[i][j]);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            if (map[i][j])
        }
}