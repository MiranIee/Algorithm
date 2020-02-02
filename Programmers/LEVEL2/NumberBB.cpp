#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> baseball)
{
    int answer = 0;
    string temp;
    string num;
    int s, b;

    for (int i = 123; i <= 987; i++) //123~987
    {
        s = 0, b = 0;
        temp = to_string(i);
        if (temp[0] == '0' || temp[1] == '0' || temp[2] == '0')
        {
            continue;
        }
        else if (temp[0] == temp[1] || temp[1] == temp[2] || temp[0] == temp[2])
        {
            continue;
        }
        //temp = "324";
        for (int j = 0; j < baseball.size(); j++)
        {
            s = 0, b = 0;
            num = to_string(baseball[j][0]);
            if (temp[0] == num[0])
                s++;
            if (temp[1] == num[1])
                s++;
            if (temp[2] == num[2])
                s++;
            if (s != baseball[j][1])
                break;

            if (num[0] == temp[1] || num[0] == temp[2])
                b++;
            if (num[1] == temp[2] || num[1] == temp[0])
                b++;
            if (num[2] == temp[0] || num[2] == temp[1])
                b++;
            if (b != baseball[j][2])
                break;

            if (j == baseball.size() - 1)
                answer++;
        }
    }

    return answer;
}

int main()
{
    int answer = solution({{123, 1, 1}, {356, 1, 0}, {327, 2, 0}, {489, 0, 1}});
    cout << answer;
}