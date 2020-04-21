#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int solution(int N, vector<pair<int, int>> v)
{
    int temp_sum = 0;
    int DP[N + 1] = {0};
    DP[0] = 0;
    DP[v[0].first] = v[0].second;

    for (int i = 1; i < N; i++)
    {
        if (N - i >= v[i].first)
        {
            // if (DP[i - 1] < DP[i]) //받은 게 더 크다면

            DP[i] = max(DP[i - 1], DP[i]);
            DP[i + v[i].first] = max(DP[i + v[i].first], DP[i] + v[i].second);
        }
    }

    return *max_element(DP, DP + N + 1);
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