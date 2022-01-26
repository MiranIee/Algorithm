#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book)
{
    bool answer = true;
    string shrt = "";
    string lng = "";
    for (int i = 0; i < phone_book.size(); i++)
    {
        for (int j = i + 1; j < phone_book.size(); j++)
        {
            if (phone_book[i].length() <= phone_book[j].length())
            {
                shrt = phone_book[i];
                lng = phone_book[j];
            }
            else
            {
                shrt = phone_book[j];
                lng = phone_book[i];
            }

            if (shrt == lng.substr(0, shrt.length()))
            {
                return false;
            }
            shrt = "";
            lng = "";
        }
    }
    return answer;
}

int main()
{
    bool answer = solution({"123", "456", "789"});
    cout << answer << endl;
}