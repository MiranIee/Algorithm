#include <string>
#include <vector>
#include <iostream>
#include <bitset>

using namespace std;

string binaryToString(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            s[i]='#';
        }else s[i]=' ';
    }

    return s;
}

string tenToTwo(int n,int num){
    int binary, sum=0;
    string result="";

    for(int i=1;num>0;i*=10){
        binary=num%2;
        sum+=binary*i;
        num/=2;
    }   
    result=to_string(sum);

    cout<<result<<endl;
    if(result.length()<n){
        for(int i=0;i<n-result.length();i++){
            result.insert(0,"0");
        }
         //append는 끝에
    }
    cout<<endl;
    cout<<result<<endl;
    result= binaryToString(result);
    cout<<endl;
    return result;
}



vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<int> map;
    int c=22|14;
    cout<<c<<endl;
    for(int i=0;i<n;i++){
        map.push_back(arr1[i]|arr2[i]);
        answer.push_back(tenToTwo(n,map[i]));
    }
    return answer;
}

int main(){
    vector<string> answer=solution(6,{46, 33,33,22, 31, 50},{27 ,56, 19, 14, 14, 10});
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<endl;
    }
}