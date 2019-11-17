#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    string result="";
    string temp="";
    string before="";
    int count=1;

    for(int i=1;i<s.length();i++){
        for(int j=0;j<s.length();j+=i){
            temp=s.substr(j,i);

            if(temp==before){//같은 경우
                count++;
            }else{
                result.append(to_string(count));
                result.append(temp);
                count=0;
            }
            before=temp;
        }
    }
    cout<<result<<endl;
    return result.length();
}

int main(){
    int answer=solution("aabbaccc");
    cout<<answer<<endl;
}