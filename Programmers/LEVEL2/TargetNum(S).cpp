#include <string>
#include <vector>

using namespace std;

int answer = 0;
int target_ = 0;

void DFS(vector<int> &numbers, int sum)
{
    if (numbers.size() == 0)
    {
        if (sum == target_)
            answer++;
        return;
    }
    else
    {
        int tmp = numbers.back();
        numbers.pop_back();
        DFS(numbers, sum + tmp);
        DFS(numbers, sum - tmp);
        numbers.push_back(tmp);
    }
}

int solution(vector<int> numbers, int target)
{
    int sum = 0;
    target_ = target;
    DFS(numbers, sum);

    return answer;
}