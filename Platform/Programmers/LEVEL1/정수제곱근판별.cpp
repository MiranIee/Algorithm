#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    double temp=sqrt(n);
    if(temp==(int)temp) return pow(temp+1,2);
    else return -1;
    return answer;
}