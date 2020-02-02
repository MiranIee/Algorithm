#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K)
{
    int answer = 0;
    int new_s = 0;
    sort(scoville.begin(), scoville.end());

    while (true)
    {
        sort(scoville.begin(), scoville.end());
        if (scoville[0] >= K)
            break;

        new_s = scoville[0] + (2 * scoville[1]);
        scoville[0] = new_s;
        scoville.erase(scoville.begin() + 1);
        answer++;
    }

    return answer;
}

int main()
{
    int answer = solution({1, 2, 3, 9, 10, 12}, 7);
    cout << answer;
}