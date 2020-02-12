#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit)
{
    int answer = 0;
    int j = 1;

    sort(people.begin(), people.end(), greater<int>());
    vector<int>::iterator it;

    for (int i = 0, j = people.size() - 1; i <= j; i++)
    {
        if (people[i] + people[j] <= limit)
            j--;
        answer++;
    }

    return answer;
}

int main(void)
{
    int answer = solution({80, 70, 50, 50}, 100);
    cout << answer;

    return 0;
}