#include <string>
#include <vector>

using namespace std;

int solution(int num)
{
    int answer = 0;
    long n=num;
    while (n!= 1)
    {
        if (answer >= 483)
        {
            return -1;
        }

        n=n % 2 ? n * 3 + 1 : n / 2;
        answer++;
    }
    return answer;
}

int main(){
    int answer=solution(5);

}