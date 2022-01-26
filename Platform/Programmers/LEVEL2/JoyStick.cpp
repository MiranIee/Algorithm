#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(string name)
{
    int answer = 0;
    //char alph[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'I', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    string alph_str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int cur = 0;
    int find = 0;
    int left, right;
    for (int i = 0; i < name.length(); i++)
    {
        find = alph_str.find(name[i]); //현재 위치
        left = find;
        right = 26 - find;

        if (left < right)
        {
            answer += left;
        }
        else
        {
            answer += right;
        }
        int next = find + 1; //다음 문자
        while (next < name.length() && name[next] == 'A')
            next++;
        cur = 0;
        answer++;
    }
    return answer - 1;
}

int main()
{
    int answer = solution("AZAAAZ");
    cout << answer;
}