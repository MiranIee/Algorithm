#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

#define MAX 100
vector<vector<int> > computer;
vector<int> visit;

int virus_com = 0;

void DFS(int n)
{
    visit[n] = true; //이 컴퓨터는 체크 완료
    if(n!=1)
        virus_com++;

    for (int i = 0; i < computer[n].size(); i++) //해당 인덱스와 연결된 컴퓨터 검사
    {
        if (!visit[computer[n][i]])
        { //아직 그 컴퓨터에 방문하지 않았다면
            DFS(computer[n][i]);
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
    DFS(1);
    cout<<virus_com<<endl;
}