#include <iostream>
#include <queue>
using namespace std;

int K;
queue<pair<int, int>> q;
int min_ = 9999999999999999999999;

void BFS()
{
    int x, y;
    string temp;
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        //temp = q.front().second;
        q.pop();
        if (x != K)
        {
            if (y + 1 < min_)
            {
                temp += to_string(x);
                q.push(make_pair(x - 1, y + 1));
                q.push(make_pair(x + 1, y + 1));
                q.push(make_pair(x * 2, y + 1));
            }
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
    q.push(make_pair(N - 1, 1));
    q.push(make_pair(N + 1, 1));
    q.push(make_pair(N * 2, 1));
    BFS();

    cout << min_ << endl;
}