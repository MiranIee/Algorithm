#include <iostream>
#include <cstring> //memset
#include <queue>
#include <stdio.h>
using namespace std;
#define MAX 50

int graph[MAX][MAX];
bool visited[MAX][MAX];
int N, M;
int cnt = 0;
int dirx[4] = {0, 0, -1, 1};
int diry[4] = {1, -1, 0, 0};

void BFS(int x, int y)
{
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));

    visited[x][y] = true;

    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dirx[i];
            int ny = y + diry[i];

            if (0 <= nx && nx < N && 0 <= ny && ny < M)
                if (graph[nx][ny] && !visited[nx][ny])
                {
                    visited[nx][ny] = true;
                    q.push(make_pair(nx, ny));
                }
        }
    }
}

int main()
{
    //테스트케이스 개수 \n 가로, 세로, 배추 갯수
    int T, K;
    int temp_x, temp_y;
    int cnt = 0;

    cin >> T;
    while (T--) // 테스트케이스만큼 반복
    {
        cnt = 0;
        memset(graph, 0, sizeof(graph));
        memset(visited, 0, sizeof(visited));

        scanf("%d %d %d", &M, &N, &K);

        for (int j = 0; j < K; j++) // 배추 위치
        {

            scanf("%d %d", &temp_x, &temp_y);
            graph[temp_y][temp_x] = 1; //시작점이 왼쪽 상단
        }

        for (int k = 0; k < N; k++)
        {
            for (int l = 0; l < M; l++)
            {
                if (graph[k][l] == 1 && !visited[k][l])
                {
                    BFS(k, l);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}