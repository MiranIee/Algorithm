#include <iostream>
#include <stdio.h>
#include <queue>
#include <algorithm>
#define MAX 1000

using namespace std;
pair<int, int> map[MAX][MAX];
bool visited[MAX][MAX];
int dirx[4] = {-1, 1, 0, 0};
int diry[4] = {0, 0, -1, 1};
int M, N;
int day = 0;
int answer = 0;

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
            {
                if (!map[nx][ny].first && !visited[nx][ny])
                {
                    map[nx][ny].first = 1;
                    map[nx][ny].second = map[x][y].second + 1;
                    visited[nx][ny] = true;
                    q.push(make_pair(nx, ny));
                }
                else if (map[nx][ny].first && visited[nx][ny])
                {
                    if (map[nx][ny].second > map[x][y].second + 1)
                    {
                        map[nx][ny].second = map[x][y].second + 1;
                        q.push(make_pair(nx, ny));
                    }
                }
            }
            if (map[x][y].second > answer)
                answer = map[x][y].second;
        }
    }
}

int main()
{
    scanf("%d %d", &M, &N);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &map[i][j]);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            if (map[i][j].first == 1 && !visited[i][j]) //map[i][j].first는 0이 아닌 모든 경우 들어감
            {
                BFS(i, j);
            }
        }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << map[i][j].second;
        }
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << map[i][j].first;
        }
        cout << endl;
    }
    cout << answer << endl;
}