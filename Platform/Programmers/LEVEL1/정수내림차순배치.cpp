#include <string>
#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string s=to_string(n);
    sort(s.begin(),s.end(),greater<long long>());
    answer=stoll(s);
    return answer;
}