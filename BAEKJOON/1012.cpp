#include <iostream>
#include <vector>

using namespace std;
#define MAX 50

int graph[MAX][MAX];

int main()
{
    //테스트케이스 개수 \n 가로, 세로, 배추 갯수
    int T, N, M, K;
    int temp_x, temp_y;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> M >> K;
        for (int j = 0; j < K; j++)
        {
            cin >> temp_x >> temp_y;
            graph[temp_x][temp_y] = 1;
        }
    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cout << graph[i][j] << " ";
    cout << endl;
}