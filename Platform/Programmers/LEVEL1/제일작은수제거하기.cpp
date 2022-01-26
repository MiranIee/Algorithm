#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    vector<int>::iterator iter = arr.begin();
    int min = *min_element(arr.begin(), arr.end());

    if (arr.size() == 1)
    {
        arr[0] = -1;
    }

    while (iter != arr.end())
    {
        if (*iter == min)
        {
            arr.erase(iter);
            break;
        }
        else
        {
            iter++;
        }
    }

    answer = arr;
    return answer;
}