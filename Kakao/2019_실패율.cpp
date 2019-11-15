#include <string>
#include <vector>
#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

bool compare(pair<float, int> a, pair<float, int> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    else
    {
        return a.first > b.first;
    }
}
vector<int> solution(int N, vector<int> stages)
{

    vector<int> answer;
    vector<pair<float, int>> fail;

    float people;
    float fail_people;

    for (int i = 1; i < N + 1; i++)
    { //i==STAGE,1
        people = 0;
        fail_people = 0;

        for (int j = 0; j < stages.size(); j++)
        {
            if (stages[j] >= i)
            { //도전자
                people++;
            }
            if (stages[j] == i)
            { //도전했지만 깨지못한 사람
                fail_people++;
            }
        }
        //cout<<people<<"  "<<fail_people<<endl;
        if (people != 0)
            fail.push_back(pair<float, int>(fail_people / people, (int)i));
        else
            fail.push_back(pair<float, int>(0, (int)i));
    }
    sort(fail.begin(), fail.end(), compare);
    //greater in functional header file
    for (int i = 0; i < fail.size(); i++)
    {
        cout<<fail[i].first<<" "<<fail[i].second<<endl;
        answer.push_back(fail[i].second);
    }
    return answer;
}

int main()
{

    vector<int> answer = solution(4, {4, 4, 4, 4, 4});
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
}