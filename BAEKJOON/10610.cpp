#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string>
using namespace std;

int solution(string s)
{
    int n = 0;
    if (s.find("0") == -1)
        return -1;
    else
    {
        sort(s.begin(), s.end(), greater<int>());
        return stoi(s);
    }
}
int main()
{
    string input;
    cin >> input;
    cout << solution(input) << endl;
    return 0;
}