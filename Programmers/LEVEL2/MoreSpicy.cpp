#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K)
{
    int answer = 0;
    int new_s = 0;
    int min1 = 0, min2 = 0;
    multiset<int> sco_s;

    for (int i = 0; i < scoville.size(); i++)
    {
        sco_s.insert(scoville[i]);
    }

    while (true)
    {
        if (*sco_s.begin() >= K)
            break;
        if (sco_s.size() == 1)
        {
            answer = -1;
            break;
        }
        new_s = *sco_s.begin() + (2 * *++sco_s.begin());
        sco_s.erase(sco_s.begin(), next(sco_s.begin(), 2));
        sco_s.insert(new_s);
        answer++;
    }

    return answer;
}

int main()
{
    int answer = solution({1, 2, 3, 9, 10, 12}, 7);
    cout << answer;
}