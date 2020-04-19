#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int solution(int N, vector<pair<int, int>> v)
{
    int temp_sum = 0;
    int j;
    vector<int> sum;

    for (int i = 0; i < N; i++)
    {
        if (N - i < v[i].first)
            continue;
        temp_sum = v[i].second;
        j = v[i].first + i;

        while (j < N)
        {
            if (N - j < v[j].first)
            {
                j++;
                continue;
            }
            else
            {
                temp_sum += v[j].second;
                j += v[j].first;
            }
        }
        sum.push_back(temp_sum);
    }
    return *max_element(sum.begin(), sum.end());
}

int main()
{
    int N, t1, t2;
    vector<pair<int, int>> v;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &t1, &t2);
        v.push_back(make_pair(t1, t2));
    }
    cout << solution(N, v) << endl;
}