#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

void solution(int shorter[9])
{
    int sum = 0;
    int i, j;
    //2개씩 빼면서 계산하면 됨
    sort(shorter, shorter + 9);

    for (i = 0; i < 9 && sum != 100; i++)
    {
        for (j = i + 1; j < 9 && sum != 100; j++)
        {
            sum = 0;
            for (int k = 0; k < 9; k++)1
            {
                if (k != i && k != j)
                {
                    sum += shorter[k];
                }
            }
        }
    }
    for (int k = 0; k < 9; k++)
    {
        if (k != (i - 1) && k != (j - 1))
        {
            cout << shorter[k] << endl;
        }
    }
}

int main()
{
    int shorter[9];
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &shorter[i]);
    }
    solution(shorter);
}