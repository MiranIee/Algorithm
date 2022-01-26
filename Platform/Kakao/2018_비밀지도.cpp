#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string tenToTwo(int n,int num){
    int binary, sum=0;
    string result="";

 while(num>0){
        binary=num%2; //나머지
        num/=2; //몫

        if(binary==1) 
        result+="#";
        else result+=" ";

    }   

    while(result.length()<n){ //자릿수를 n만큼 맞춤
        result.append(" ");
    }
   reverse(result.begin(),result.end()); //result 반전

    return result;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for(int i=0;i<n;i++){
        answer.push_back(tenToTwo(n,arr1[i]|arr2[i]));
        //비트연산자 사용
    }
    return answer;
}

int main(){
    vector<string> answer=solution(6,{46, 33,33,22, 31, 50},{27 ,56, 19, 14, 14, 10});
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<endl;
    }
}