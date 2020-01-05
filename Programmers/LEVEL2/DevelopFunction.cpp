#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    vector<int> day(progresses.size());
    int count = 0;
    int max = 0;
    int d_cnt = 1;
    while (count != progresses.size())
    {
        count = 0;
        for (int i = 0; i < progresses.size(); i++)
        {
            if (progresses[i] < 100)
            {
                progresses[i] += speeds[i];
                day[i] = day[i] + 1;
            }
            else
            {
                count++;
            }
        }
    }

    max = day[0];
    for (int i = 1; i < day.size(); i++)
    {
        if (max >= day[i])
        {
            d_cnt++;
        }
        else
        {
            answer.push_back(d_cnt);
            d_cnt = 1;
            max = day[i];
        }
    }
    answer.push_back(d_cnt);
    return answer;
}

int main()
{
    vector<int> answer;
    answer = solution({93, 30, 55}, {1, 30, 5});
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }

    cout << endl;
    return 0;
}