#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K)
{
    int answer = 0;
    int new_s = 0;
    int min1 = 0, min2 = 0;

    sort(scoville.begin(), scoville.end());

    while (true)
    {
        min1 = *min_element(scoville.begin(), scoville.end());

        if (min1 >= K)
            break;
        if (scoville.size() == 1)
        {
            answer = -1;
            break;
        }
        scoville.erase(min_element(scoville.begin(), scoville.end()));
        min2 = *min_element(scoville.begin(), scoville.end());
        scoville.erase(min_element(scoville.begin(), scoville.end()));

        new_s = min1 + (2 * min2);
        scoville.push_back(new_s);
        answer++;
    }

    return answer;
}

int main()
{
    int answer = solution({1, 2, 3, 9, 10, 12}, 7);
    cout << answer;
}