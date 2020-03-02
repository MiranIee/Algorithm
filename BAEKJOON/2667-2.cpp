#include <iostream>
#include <stdio.h>
#include <queue>
#include <algorithm>
#define MAX 25

using namespace std;

int map[MAX][MAX];
bool visited[MAX][MAX];
int dirx[4] = {0, 0, -1, 1};
int diry[4] = {-1, 1, 0, 0};
int N;
vector<int> danzi_cnt;

void BFS(int x, int y)
{
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));

    int cnt = 1;
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

            if (0 <= nx && nx < N && 0 <= ny && ny < N)
            {
                if (map[nx][ny] && !visited[nx][ny])
                {
                    visited[nx][ny] = true;
                    cnt++;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }

    danzi_cnt.push_back(cnt);
}
int main()
{
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%1d", &map[i][j]);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            if (map[i][j] && !visited[i][j])
            {
                BFS(i, j);
            }
        }

    sort(danzi_cnt.begin(), danzi_cnt.end());
    cout << danzi_cnt.size() << endl;
    for (int i = 0; i < danzi_cnt.size(); i++)
    {
        cout << danzi_cnt[i] << endl;
    }
}