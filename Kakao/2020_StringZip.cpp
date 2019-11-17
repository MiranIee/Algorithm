#include <vector>
#include <iostream>
#include <string>

using namespace std;

int solution(string s)
{
    int answer = 0;
    int min_length = 1000;
    string result = "";
    string temp = "";
    string before = "";
    string temps = "";
    int count = 1;

    for (int i = s.length() / 2; i > 0; i--)
    {
        for (int j = 0; j < s.length(); j += i)
        {
            temps = s.substr(j, i);

            if (before.empty())
            {
                before = temps;
                continue;
            }

            if (before == temps)
            {
                count++;
                if (i + j >= s.length())
                {
                    temp.append(to_string(count));
                    temp.append(temps);
                }
            }
            else
            {
                if (i + j >= s.length())
                {
                    temp.append(temps);
                }
                if (count != 1)
                {
                    temp.append(to_string(count));
                    temp.append(before);
                }
                else
                {
                    temp.append(before);
                }
                before = temps;
                count = 1;
            }
        }
        cout << temp << endl;
        if (temp.length() < min_length)
        {
            min_length = temp.length();
            result = temp;
        }
        temp = "";
    }
    cout << result << endl;
    return result.length();
}

int main()
{
    int answer = solution("abcabcdede");
    cout << answer << endl;
}