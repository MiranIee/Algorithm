#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    answer=arr;

    return answer;
}