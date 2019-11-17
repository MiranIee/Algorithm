#include <vector>
#include <iostream>
#include <string>

using namespace std;

int solution(string s)
{
    int answer = 0;
    int min_length=1000;
    string result = "";
    string temp = "";
    string before = "";
    int count = 1;

    for (int i = 1; i <= s.length(); i++)
    {
        for (int j = 0; j < s.length()-i; j += i)
        {   
            before=s.substr(j,i);
            if (before == s.substr(j + i, i))
            {
                count++;
            }
            else
            {
                if(count!=1){
                temp.append(to_string(count));
                temp.append(before);
                count = 1;
                }
                else{
                    temp.append(before);
                    count=1;
                }
            }
        }
        if(count==1){
            temp.append(before);
        }else{
            temp.append(to_string(count));
            temp.append(before);
        }
        cout<<temp<<endl;

        if(temp.length()<min_length){
            min_length=result.length();
            result=temp;
        }
        temp="";
    }
    cout << result << endl;
    return result.length();
}

int main()
{
    int answer = solution("aabbaccc");
    cout << answer << endl;
}