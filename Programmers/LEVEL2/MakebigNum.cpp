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
    vector<char> temp;

    for (int i = 0; i < number.length(); i++)
    {
        temp.push_back(number[i]);
    }
    //int로 바꾸니까 시간초과

    vector<char>::iterator it = temp.begin();

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
        else //"1010",2 -> 케이스 해결
        {
            temp.erase(it - 1);
            break;
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        answer += temp[i];
    }

    return answer;
}

int main()
{
    string answer = solution("1010", 2);
    cout << answer;
}