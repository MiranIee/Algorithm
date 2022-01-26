#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

int solution(int N)
{
    int i;
    int num = N;
    string s_N = to_string(N);
    string s_I;
    int sum = 0;

    // while (num > 0)
    // {
    //     digit.push_back(num % 10);
    //     num = num / 10;
    //     cnt++;
    // }

    for (i = N - (s_N.length()) * 9; i < N; i++)
    {
        s_I = to_string(i);
        sum = i;
        for (int j = 0; j < s_I.length(); j++)
        {
            sum += s_I[j] - '0';
        }
        if (sum == N)
            return i;
    }
    return 0;
}
int main()
{
    int N;
    scanf("%d", &N);
    cout << solution(N) << endl;
    return 0;
}