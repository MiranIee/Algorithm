#include <iostream>
#include <stdio.h>
using namespace std;

#define MAX 100

int card[MAX];
int close = 0;
int N, M;

void DFS(int pos, int cnt, int sum)
{
    if (cnt == 3)
    {
        if (sum <= M)
        {
            close = max(sum, close);
            return;
        }
    }
    if (sum > M || cnt > 3 || pos >= N) //base case
        return;

    //카드를 선택한 경우
    DFS(pos + 1, cnt + 1, sum + card[pos]);
    //카드를 선택하지 않은 경우
    DFS(pos + 1, cnt, sum);
}

int main()
{
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &card[i]);
    }

    DFS(0, 0, 0);
    cout << close << endl;
}