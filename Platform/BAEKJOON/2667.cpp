#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX 25

int N;
int house_cnt; //각 단지 내 집수
string graph[MAX];
vector<int> danzi;
bool visited[MAX][MAX];

void DFS(int x, int y)
{
    house_cnt++;
    int dirx[4] = {-1, 1, 0, 0};
    int diry[4] = {0, 0, -1, 1};
    visited[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dirx[i];
        int ny = y + diry[i];

        if (0 <= nx && nx < N && 0 <= ny && ny < N)
            if (graph[nx][ny] == '1' && visited[nx][ny] == false)
                DFS(nx, ny);
    }
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> graph[i]; //한줄씩 입력받음
    }
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            if (graph[i][j] == '1' && visited[i][j] == false)
            {
                house_cnt = 0;
                DFS(i, j);
                danzi.push_back(house_cnt);
            }
        }

    sort(danzi.begin(), danzi.end());
    cout << danzi.size() << endl;

    for (int i = 0; i < danzi.size(); i++)
        cout << danzi[i] << endl;
    return 0;
}
