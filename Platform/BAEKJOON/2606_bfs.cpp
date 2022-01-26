#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

#define MAX 100
vector<vector<int> > computer;
vector<int> visit;

int virus_com = 0;

void BFS(int n)
{
    int temp;
    queue<int> q;

    q.push(n);
    visit[n] = true; //이 컴퓨터는 체크 완료

    while(!q.empty()){
        temp=q.front();
        q.pop();

        for(int i=0;i<computer[temp].size();i++){
            if(!visit[computer[temp][i]])
             {
                 visit[computer[temp][i]]=true;
                 virus_com++;
                 q.push(computer[temp][i]);
                }
            
        }
    }
}

int main()
{
    int com_num, line_num, n1, n2;

    scanf("%d %d", &com_num, &line_num);

    computer.resize(com_num+1);
    visit.resize(com_num+1);
    
    for (int i = 1; i <= line_num; i++)
    {
        scanf("%d %d", &n1, &n2);
        computer[n1].push_back(n2);
        computer[n2].push_back(n1);
    }
    BFS(1);
    cout<<virus_com<<endl;
}