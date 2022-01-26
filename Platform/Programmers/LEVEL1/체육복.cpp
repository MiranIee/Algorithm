#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	int *lost_chk = new int[lost.size()]{ 0 };
	int *reserve_chk = new int[reserve.size()]{ 0 };
	int lost_n = 0;
	bool check = false;

	for (int i = 0; i < lost.size(); i++) {
		for (int j = 0; j < reserve.size(); j++) {
			if (lost[i] == reserve[j]) {
				reserve_chk[j] = 1;
				lost_chk[i] = 1;
			}
		}
	}
	for (int i = 0; i < lost.size(); i++) {
		if (lost_chk[i] == 1) {
			check = true;
		}
		else {
			for (int j = 0; j < reserve.size(); j++) {
				if ((lost[i] + 1 == reserve[j] && reserve_chk[j] == 0) || (lost[i] - 1 == reserve[j] && reserve_chk[j] == 0)) {
					check = true;
					reserve_chk[j] = 1;
					break;
				}
			}
		}
		if (check == false)
			lost_n++;
		check = false;
	}

	answer = n - lost_n;

	return answer;
}

int main() {
	int answer;
	vector<int> lost = { 2,3,4 };
	vector<int> reserve = { 1,2,3,6 };
	answer = solution(7, lost, reserve);
	cout << answer << endl;

	return 0;
}