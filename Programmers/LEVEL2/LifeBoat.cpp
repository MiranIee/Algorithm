#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit)
{
    int answer = 0;

    sort(people.begin(), people.end(), greater<int>());
    vector<int>::iterator it;
    it = people.begin();

    while (!people.empty())
    {
        if (it == people.end() - 1)
        {
            answer += people.size();
            break;
        }

        if ((*it + people.back()) <= limit) //people.end()는 마지막 다음을 가르키고 있음!!!!!
        {
            answer++;
            if (it == people.end() - 2)
            {
                people.erase(it);
                people.pop_back();
                it = people.end() - 1;
            }
            else
            {
                people.erase(it);
                people.pop_back();
            }
        }
        else
        {
            it++;
            continue;
        }
    }

    return answer;
}

int main(void)
{
    int answer = solution({70, 80, 50}, 100);
    cout << answer;

    return 0;
}