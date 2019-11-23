#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights)
{
    int answer = 0;
    int cur_bridge = weight;
    int time = 0;
    vector<int>::iterator iter = truck_weights.begin();

    while (!truck_weights.empty())
    {
        if (cur_bridge > 0)
    }

    return answer;
}

int main()
{

    int answer = solution(2, 10, {7, 4, 5, 6});
    cout << answer << endl;

    return 0;
}