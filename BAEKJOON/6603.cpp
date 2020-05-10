#include <stdio.h>
#include <iostream>
#include <cstring>
#define MAX 13
using namespace std;

int S[MAX];

void solution(int n)
{
}

int main()
{
    int k;
    while (k != 0)
    {
        memset(S, 0, sizeof(S));
        scanf("%d", &k);

        for (int i = 0; i < k; i++)
            scanf("%d", &S[i]);
        solution(k);
    }
}