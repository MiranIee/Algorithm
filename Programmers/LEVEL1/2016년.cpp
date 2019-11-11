#include <iostream>
#include <string>

using namespace std;

string solution(int a, int b) {

	int sum = 0;
	int input = 0;

	string answer;
	string day[7] = { "THU","FRI","SAT","SUN","MON","TUE","WED"};
	
	for (int i = 1; i < a; i++) {

		if (i == 4 || i == 6 || i == 9 || i == 11) {
			sum += 30;
		}
		else if (i == 2) {
			sum += 29;
		}
		else {
			sum += 31;
		}
	}

	sum += b;
	

	answer = day[sum % 7];

	return answer;
}

int main() {

	string answer = solution(3,1);
	cout << answer << endl;
	return 0;
}