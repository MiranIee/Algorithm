#include <iostream>
#include <vector>
using namespace std;

#define MAX 8

int graph[MAX][MAX];
int N, M;
bool visited[MAX][MAX];
vector<int> v;
int wall = 0;
int cnt;

void DFS(int x, int y)
{
    if (wall < 3)
    {
        cnt++;
        visited[x][y] = true;
        int dirx[4] = {-1, 1, 0, 0};
        int diry[4] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dirx[i];
            int ny = y + diry[i];
            if (0 <= nx && nx < N && 0 <= ny && ny < M)
            {
                if (graph[nx][ny] == 0 && visited[nx][ny] == false)
                {
                    graph[nx][ny] = 1;
                    wall++;
                    DFS(nx, ny);
                }
            }
        }
    }
}

int main()
{
    cin >> N;
    cin >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            cin >> graph[i][j];
        }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            if (graph[i][j] == 2 && visited[i][j] == false)
            {
                cnt = -1;
                DFS(i, j);
                v.push_back(cnt);
            }
        }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}
