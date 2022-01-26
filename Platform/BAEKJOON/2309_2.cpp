#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

void solution(vector<int> shorter)
{
    int sum = 0;
    bool chk = false;
    sort(shorter.begin(), shorter.end());

    for (int i = 0; i < 9; i++)
        sum += shorter[i];

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (sum - shorter[i] - shorter[j] == 100)
            {
                shorter.erase(shorter.begin() + i);
                shorter.erase(shorter.begin() + j - 1); // 위에서 하나를 지웠기 때문에 -1
                chk = true;
                break;
            }
        }
        if (chk)
            break;
    }
    for (int i = 0; i < 7; i++)
        cout << shorter[i] << endl;
}

int main()
{
    vector<int> shorter;
    int temp;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &temp);
        shorter.push_back(temp);
    }
    solution(shorter);
}