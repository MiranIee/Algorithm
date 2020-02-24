#include <iostream>
#include <vector>

using namespace std;
#define MAX 50

int graph[MAX][MAX];
bool visited[MAX][MAX];
int N, M;

void DFS(int x, int y)
{
    int nx, ny;
    int dirx[4] = {-1, 1, 0, 0};
    int diry[4] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++)
    {
        nx = x + dirx[i];
        ny = y + diry[i];
        if (0 <= nx && nx <= N - 1 && 0 <= ny && ny <= M - 1)
            if (graph[nx][ny] == 1 && visited[nx][ny] == false)
                DFS(nx, ny);
    }
}

int main()
{
    //테스트케이스 개수 \n 가로, 세로, 배추 갯수
    int T, K;
    int temp_x, temp_y;
    int cnt;

    cin >> T;
    for (int i = 0; i < T; i++) // 테스트케이스만큼 반복
    {
        cnt = 0;
        cin >> N >> M >> K;
        for (int j = 0; j < K; j++) // 배추 위치
        {
            cin >> temp_x >> temp_y;
            graph[temp_x][temp_y] = 1;
        }

        for (int k = 0; k < N; k++)
        {
            for (int l = 0; l < M; l++)
            {
                if (graph[k][l] == 1 && visited[k][l] == false)
                {
                    DFS(k, l);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}