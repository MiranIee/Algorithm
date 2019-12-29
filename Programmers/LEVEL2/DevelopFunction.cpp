#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    vector<int> day(progresses.size());
    int count = 0;
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