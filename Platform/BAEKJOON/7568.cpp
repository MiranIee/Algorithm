#include <stdio.h>
#include <iostream>
#include <algorithm>
#define MAX 50
using namespace std;

pair<pair<int, int>, int> Bigguy[MAX];

void solution(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (Bigguy[i].first.first < Bigguy[j].first.first && Bigguy[i].first.second < Bigguy[j].first.second)
            {
                Bigguy[i].second++;
            }
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &Bigguy[i].first.first, &Bigguy[i].first.second);
        Bigguy[i].second = 1;
    }

    solution(N);

    for (int i = 0; i < N; i++)
    {
        cout << Bigguy[i].second << " ";
    }
    return 0;
}