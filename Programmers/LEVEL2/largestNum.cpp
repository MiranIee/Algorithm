#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
    if (b + a < a + b)
        return true;
    else
        return false;
}
string solution(vector<int> numbers)
{
    string answer = "";
    vector<string> temp;
    for (int i = 0; i < numbers.size(); i++)
    {
        temp.push_back(to_string(numbers[i]));
    }
    sort(temp.begin(), temp.end(), compare);
    for (int i = 0; i < temp.size(); i++)
    {
        answer += temp[i];
    }
    if (temp[0] == "0")
        answer = "0";
    return answer;
}
