#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees)
{
    int answer = 0;
    string temp = "";
    for (int i = 0; i < skill_trees.size(); i++)
    {
        temp = skill_trees[i];
        for (int j = 0; j < temp.length(); j++)
        {
        }
    }
    return answer;
}

int main()
{
    int answer = solution("CBD", {"BACDE", "CBADF", "AECB", "BDA"});
    cout << answer << endl;
}