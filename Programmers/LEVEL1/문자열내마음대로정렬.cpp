#include <string>
#include <vector>
#include <algorithm>
#include<string.h>
#include <iostream>

using namespace std;
int n2;

bool compare(string a, string b)
{
    int size=max(a.length(),b.length());

    if (a[n2]==b[n2])
    {
        for (int i = 0; i <= size; i++)
        {
            if (a[i] != b[i])
            {
                return a[i] < b[i];
            }
        }
    }
    else
    {
        return a[n2] < b[n2];
    }
}

vector<string> solution(vector<string> strings, int n)
{
    vector<string> answer;
    n2 = n;

    sort(strings.begin(), strings.end(), compare);
    answer=strings;

    return answer;
}
