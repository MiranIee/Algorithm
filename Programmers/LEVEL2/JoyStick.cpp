#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string name)
{
    int answer = 0;
    char alph[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'I', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int cur = 0;
    for (int i = 0; i < name.length(); i++)
    {
        while (name[i] != alph[cur])
        {
            if (cur == 25)
                cur = 0;
            else
                cur++;

            answer++;
        }
        answer++; //다음 방향으로 옮길 때
    }
    return answer;
}

int main()
{
    int answer = solution("JAN");
    cout << answer;
}