#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> heights)
{
    vector<int> answer;
    int count = 0;
    for (int i = heights.size() - 1; i > 0; i--)
    {
        count = i - 1;
        while (count >= 0)
        {
            if (heights[count] > heights[i])
            {
                answer.push_back(count + 1);
                break;
            }
            count--;
        }
        if (count < 0)
            answer.push_back(0);
    }
    answer.push_back(0);
    reverse(answer.begin(), answer.end());

    return answer;
}
