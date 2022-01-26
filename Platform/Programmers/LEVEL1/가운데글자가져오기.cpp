#include <string>

using namespace std;

string solution(string s) {
    string answer = "";
    if(s.size()%2==0){ //짝수인경우

        answer=s[s.size()/2-1];
        answer+=s[s.size()/2];
    }else{
        answer=s[s.size()/2];
    }
    return answer;
}