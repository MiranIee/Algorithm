#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>

using namespace std;

int solution(string s)
{
	int answer = 0;
	vector<string> temp;
	int count = 2;
	string temps = "";
	//string temps = "";
	int min_length = 1000;
	int min_value = 0;
	string result;
	vector<string>::iterator iter;

	for (int i = 1; i <= s.length(); i++)
	{
		for (int j = 0; j < s.length(); j += i)
		{
			temp.push_back(s.substr(j, i));
		}

		for (iter = temp.begin(); iter + 1 != temp.end();)
		{
			if (*iter == *(iter + 1))
			{
				iter = temp.erase(iter);
				//temp.erase(iter);
				if (temps == *iter)
				{
					count++;
				}
				else
				{
					iter = temp.insert(iter, to_string(count));
					iter++;
					count = 2;
				}

				temps = *iter;
			}
			else
			{
				++iter;
			}
		}

		result = accumulate(temp.begin(), temp.end(), string{});
		cout << result << endl;
		// cout << count << endl;

		if (result.length()< min_length)
		{
			min_length = result.length();
			min_value = i;
		}
		temp.clear();

	}
	//cout << "min_value: " << min_value << endl;

	return min_length;
}

int main() {
	int answer = solution("aabbaccc");
	cout << answer << endl;
	return 1;

}