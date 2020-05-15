#include <iostream>
#include <stdio.h>
using namespace std;

#define MAX 100

int card[MAX];

int solution(int N, int M)
{
    int sum = 0;
    int close = 0; //제일 가까운 수 저장
    bool flag = false;
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; j < N; j++)
            {
                sum = i + j + k;
                if (close < sum && sum <= M)
                {
                    close = sum;
                }
                if (sum == M)
                {
                    flag = true;
                    break;
                }
                if (sum > M)
                    break;
            }
            if (flag)
                break;
        }
        if (flag)
            break;
    }

    return close;
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &card[i]);
    }

    cout << solution(N, M) << endl;
}