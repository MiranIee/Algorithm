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
                else if (map[nx][ny].first == 1 && visited[nx][ny] == true)
                {
                    if ((map[nx][ny].second > map[x][y].second + 1) && map[x][y].first != -1)
                    {
                        map[nx][ny].second = map[x][y].second + 1;
                        q.push(make_pair(nx, ny));
                    }
                }
            }
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
            if (map[i][j].first && !visited[i][j])
            {
                BFS(i, j);
            }
        }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << map[i][j].second;
        cout << endl;
    }
    //cout << day << endl;
}