#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

bool checked[1000000 + 1];

int BFS(int n)
{
    int x, y;
    queue<pair<int, int>> q;
    q.push(make_pair(n, 0));
    checked[n] = true;

    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        if (x == 1)
            break;

        if (!checked[x - 1])
        {
            checked[x - 1] = true;
            q.push(make_pair(x - 1, y + 1));
        }
        if (x % 3 == 0 && !checked[x / 3])
        {
            checked[x / 3] = true;
            q.push(make_pair(x / 3, y + 1));
        }
        if (x % 2 == 0 && !checked[x / 2])
        {
            checked[x / 2] = true;
            q.push(make_pair(x / 2, y + 1));
        }
    }
    return y;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << BFS(n) << endl;
    return 0;
}