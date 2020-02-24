#include <iostream>
#include <vector>
using namespace std;

#define MAX 8

string graph[MAX];
int N, M;
bool visited[MAX][MAX];
int main()
{
    cin >> N, M;
    for (int i = 0; i < N; i++)
    {
        cin >> graph[i];
    }
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            if (graph[i][j] == '2' && visited[i][j] == false)
        }
}
