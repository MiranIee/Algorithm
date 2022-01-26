#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int red)
{
    vector<int> answer;
    int i;
    for (i = 1; i * i <= red; i++)
    {
        if (red % i == 0)
        {
            if (2 * i + 2 * (red / i) + 4 == brown)
            {

                answer.push_back(2 + (red / i));
                answer.push_back(2 + i);
                break;
            }
        }
    }

    return answer;
}

int main()
{
    vector<int> answer = solution(24, 24);
    cout << answer[0] << " " << answer[1] << endl;
}