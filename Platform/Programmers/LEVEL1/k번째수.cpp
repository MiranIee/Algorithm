#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    
    //array -> orginal array ! 
    vector<int> answer;
    vector<int> copy1;
    
    for(int i=0;i<commands.size();i++){
        copy1.clear();
        copy1.assign(array.begin()+commands[i][0]-1,array.begin()+commands[i][1]);
        sort(copy1.begin(),copy1.end());
        answer.push_back(copy1[commands[i][2]-1]);
    }

    return answer;
}
