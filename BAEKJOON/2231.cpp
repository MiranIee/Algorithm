#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int solution(int N)
{
    int i;
    int num = N;
    int sum = 0;
    int cnt = 0;
    vector<int> digit;

    while (num > 0)
    {
        digit.push_back(num % 10);
        num = num / 10;
        cnt++;
    }

    for (i = N - cnt * 9; i < N; i++)
    {
        sum = i;
        for (int j = 0; j < digit.size(); j++)
        {
            sum += digit[j];
        }
        if (sum == N)
            break;
    }
    return i;
}
int main()
{
    int N;
    scanf("%d", &N);
    cout << solution(N) << endl;
    return 0;
}