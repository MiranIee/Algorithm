#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> temp;
    int num,num2;

    for(int i=0;i<dartResult.length();i++){
        switch (dartResult[i])
        {
        case 'S':
            break;
        case 'D':
            num=temp.back();
            temp.pop_back();
            temp.push_back(pow(num,2));
            break;
        case 'T':
            num=temp.back();
            temp.pop_back();
            temp.push_back(pow(num,3));
            break;
        case '*':
            num=temp.back();
            temp.pop_back();
            if(temp.size()>1){
                num2=temp.back();
            temp.pop_back();
            }
            temp.push_back(num*=2);
            if(temp.size()>1)
            temp.push_back(num2*=2);
        break;
        case '#':
            num=temp.back();
            temp.pop_back();
            if(temp.size()>1){
                num2=temp.back();
            temp.pop_back();
            }
            temp.push_back(num*=(-1));
            if(temp.size()>1)
            temp.push_back(num2*=(-1));
        break;
        default: //숫자인 경우
            temp.push_back(dartResult[i]-'0');
            break;
        }
    }

    while(!temp.empty()){
        answer+=temp.back();

        temp.pop_back();
    }
    return answer;
}

int main(){
    int answer=solution("1S2D*ET");
    cout<<answer<<endl;
}