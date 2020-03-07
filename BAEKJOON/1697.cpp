#include <iostream>
#include <queue>
using namespace std;

int K;
queue<pair<int, int>> q;
int min_ = 100000000;

void BFS()
{
    int x, y;
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        if (x != K)
        {
            q.push(make_pair(x - 1, y + 1));
            q.push(make_pair(x + 1, y + 1));
            q.push(make_pair(x * 2, y + 1));
        }
        else
        {
            if (y < min_)
                min_ = y;
        }
    }
}

int main()
{
    int N;
    scanf("%d %d", &N, &K);
    q.push(make_pair(N - 1, 0));
    q.push(make_pair(N + 1, 0));
    q.push(make_pair(N * 2, 0));
    BFS();

    cout << min << endl;
}