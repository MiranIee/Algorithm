#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location)
{
    int answer = 0;
    int max = 0;
    vector<pair<int, int>> v;
    vector<pair<int, int>> temp;

    for (int i = 0; i < priorities.size(); i++)
    {
        v.push_back(pair<int, int>(priorities[i], i));
    }

    while (!v.empty())
    {
        max = max_element(v.begin(), v.end())->first;

        if (max == v.begin()->first)
        {
            temp.push_back(v.front());
            v.erase(v.begin()); //not v.erase(i);
        }
        else
        {
            v.push_back(v.front());
            v.erase(v.begin());
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i].second == location)
        {
            answer = i + 1;
            break;
        }
    }
    return answer;
}
