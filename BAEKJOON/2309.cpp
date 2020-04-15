#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

void solution(int shorter[9])
{
    int sum = 0;
    int n1 = 0;
    int n2 = 1;
    int i = 0;
    //2개씩 빼면서 계산하면 됨
    while (sum != 100)
    {
        if (i != n1 || i != n2)
        {
            sum += shorter[i];
        }
        if (n2 == 9 && sum != 100)
        {
            sum = 0;
            n1++;
            n2 = n1;
        }
        else
        {
            n2++;
        }
    }

    sort(shorter, shorter + 9);
    for (int i = 0; i < 9; i++)
    {
        if (i != n1 || i != n2)
            cout << shorter[i] << endl;
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