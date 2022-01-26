#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees)
{
    int answer = 0;
    string tempStr = "";
    int tempPos = 0;
    bool chk = false;

    for (int i = 0; i < skill_trees.size(); i++)
    {
        tempStr = skill_trees[i];
        chk = false;

        for (int j = 1; j < skill.length(); j++)
        {
            tempPos = tempStr.find(skill[j]);
            if (tempPos != -1)
            { // 존재하는 경우
                string temp = tempStr.substr(0, tempPos);
                if (temp.find(skill[j - 1]) == -1)
                { //순서가 잘못된 경우
                    chk = true;
                    break;
                }
            }
        }
        if (!chk)
        {
            answer++;
        }
    }
    return answer;
}