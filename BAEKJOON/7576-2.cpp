#include <iostream>
#include <stdio.h>
#include <queue>
#include <algorithm>
#define MAX 1001

using namespace std;
bool visited[MAX][MAX];
pair<int, int> map[MAX][MAX];

int dirx[4] = {-1, 1, 0, 0};
int diry[4] = {0, 0, -1, 1};
int M, N;
int day = 0;
int answer = 0;

void BFS(queue<pair<int, int>> q)
{
    int temp = 0;
    int x, y;

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
            }
        }
    }
}
bool isEqual(pair<int, int> &element)
{
    return element.first == 0;
}

int main()
{
    queue<pair<int, int>> q;
    visited[MAX][MAX] = {
        false,
    };
    fill_n(map[0], MAX * MAX, make_pair(-1, 0));
    pair<int, int> *zero;

    scanf("%d %d", &M, &N);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &map[i][j]);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            if (map[i][j].first == 1 && !visited[i][j]) //map[i][j].first는 0이 아닌 모든 경우 들어감
            {
                q.push(make_pair(i, j));
                visited[i][j] = true;
            }
        }

    BFS(q);

    answer = max_element(&map[0][0], &map[N][M])->second;
    //.이랑 ->차이

    zero = find_if(&(map[0][0]), &(map[N][M]), isEqual);

    if (zero != &(map[N][M])) //0이 존재할때
        answer = -1;

      cout << answer << endl;
}