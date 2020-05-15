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
            for (int k = j + 1; k < N; k++)
            {
                sum = card[i] + card[j] + card[k];

                if (sum == M)
                {
                    return M;
                }
                if (close < sum && sum <= M)
                {
                    close = sum;
                }
                // if (sum > M)
                //     break;
            }
        }
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