#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string name)
{
    int answer = 0;
    char alph[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int cur = 0;
    for (int i = 0; i < name.length(); i++)
    {
        while (name[i] != alph[cur])
        {
            if (cur == 25)
                cur = 0;
            cur++;
            answer++;
        }
        answer++; //다음 방향으로 옮길 때
    }
    return answer;
}

int main()
{
    cout << "h1i";
    int answer = solution("JAN");
    cout << "hi";
    cout << answer;
}