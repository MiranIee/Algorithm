#include <vector>
#include <algorithm>
using namespace std;
vector<int> one = {1, 2, 3, 4, 5};
vector<int> two = {2, 1, 2, 3, 2, 4, 2, 5};
vector<int> thr = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
//계속해서 반복되는 수들 미리 선언해놓기
vector<int> solution(vector<int>answers){
    vector<int> answer;
    vector<int> people(3);//크기가 3인 people 벡터 선언
    for(int i=0;answers.size();i++){
        if(answers[i]==one[i%one.size()]) people[0]++;
        /*
        one[0(0%5)],one[1(1%5)]..one[4(4%5)],one[0(5%5)]..
        이런식으로 배열의 사이즈만큼 반복해서 정답이 맞는지 체크하게 된다!        
        */
       if(answers[i]=two[i%two.size()])people[1]++;
       if(answers[i]=thr[i%thr.size()])people[2]++;
    } //이렇게 해서 채점을 마치고 people 벡터에는 맞춘 정답 수가 들어가게 된다
    int people_max = *max_element(people.begin(),people.end());
    //최댓값을 뽑는 함수 !!!
    for(int i=0;i<3;i++){
        if(people[i]==people_max)
        answer.push_back(i+1);
    }
    //최댓값과 같다면 답에 push
    //그때 push되는 값은 i+1 -> 변수를 따로 추가하지 않고 순위 메기기..
}