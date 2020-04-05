#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> number;
    vector<char> symbol;

    string input;
    scanf("%s", &input);
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '0' || input[i] > '9')
            symbol.push_back(input[i]);
        if (input[i] >= '0' && input[i] <= '9')
            number.push_back(input[i]);
    }

    for (int i = 0; i < number.size(); i++)
        cout << number[i] << " ";
    cout << endl;
    for (int i = 0; i < symbol.size(); i++)
        cout << symbol[i] << " ";
}
