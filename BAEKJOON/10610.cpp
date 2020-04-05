#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string>
using namespace std;

string solution(string s)
{
    long long n = 0;
    int sum = 0;
    if (s.find("0") == -1)
        return "-1";
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            sum += s[i] - '0';
        }
        if (sum % 3 == 0)
        {
            sort(s.begin(), s.end(), greater<int>());
            return s;
        }
        else
            return "-1";
    }
}
int main()
{
    string input;
    cin >> input;
    cout << solution(input) << endl;
    return 0;
}