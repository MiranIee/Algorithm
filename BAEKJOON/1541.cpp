#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int sum = 0;
    string temp = "";
    string input;
    cin >> input;
    bool minus = false;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '+' || input[i] == '-')
        {
            if (minus)
                sum -= stoi(temp);
            else
                sum += stoi(temp);
            if (input[i] == '-')
                minus = true;
            temp = "";
        }
        else
            temp += input[i];
    }
}
