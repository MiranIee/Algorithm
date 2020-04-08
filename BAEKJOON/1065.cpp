#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int solution(int n)
{
    int sum = 0;
    int second;
    if (n <= 100)
        return n;
    else
    {
        for (int i = 100; i < n; i++)
        {
            second = i - (i / 100 * 100) / 10;
            if (abs(i / 100 - second) == abs(second - i % 10))
            {
                sum++;
            }
        }

        return 99 + sum;
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    cout << solution(N) << endl;
}