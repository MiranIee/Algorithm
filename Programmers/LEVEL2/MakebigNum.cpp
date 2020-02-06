#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string number, int k)
{
    string answer = "";
    int min = 0;
    int k2 = 0;
    vector<int> temp;

    for (int i = 0; i < number.length(); i++)
    {
        temp.push_back(number[i] - '0');
    }
    vector<int>::iterator it = temp.begin();

    while (k2 != k)
    {
        if (it != temp.end())
        {
            if (*it < *(it + 1))
            {
                temp.erase(it);
                k2++;
                it = temp.begin();
            }
            else
            {
                it++;
            }
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        answer += to_string(temp[i]);
    }

    return answer;
}

int main()
{
    string answer = solution("4177252841", 4);
    cout << answer;
}