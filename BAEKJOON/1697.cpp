#include <iostream>
#include <queue>
#define MAX 100001
using namespace std;

int K;
queue<pair<int, int>> q;
int check[MAX];
int min_ = 999999999;
//10000, 0이랑 x범위..
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
            if (x - 1 >= 0 && !check[x - 1])
            {
                check[x - 1] = true;
                q.push(make_pair(x - 1, y + 1));
            }
            if (x + 1 < MAX && !check[x + 1])
            {
                check[x + 1] = true;
                q.push(make_pair(x + 1, y + 1));
            }
            if (x * 2 < MAX && !check[2 * x])
            {
                check[x * 2] = true;
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
    if (N == K)
        cout << 0 << endl;
    else if ((N + 1 == K) || (N - 1 == K) || (N * 2 == K))
        cout << 1 << endl;
    else
    {
        q.push(make_pair(N, 0));
        BFS();

        cout << min_ << endl;
    }
}