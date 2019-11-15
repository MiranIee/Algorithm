#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


string tenToTwo(int n,int num){
    int binary, sum=0;
    string result="";

 while(num>0){
        binary=num%2;
        num/=2;

        if(binary==1)
        result+="#";
        else result+=" ";

    }   

    while(result.length()<n){
        result.append(" ");
    }
   
   reverse(result.begin(),result.end());


    return result;
}



vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<int> map;

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