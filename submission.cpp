// �ǽ����� 1
/*
#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<vector<int>>score1 = { {2, 4}, {5, -5} };
	vector<vector<int>>score2 = { {-2, 3}, {0, -5} };
	vector<vector<int>>result;
	vector<int>Q;

	for (int i = 0; i < score1.size(); i++) {
		for (int j = 0; j < score1[i].size(); j++) {
			Q.push_back(score1[i][j] + score2[i][j]);
		}
		result.push_back(Q);
		Q.clear();
	}
	for (int i = 0; i < score1.size(); i++) {
		for (int j = 0; j < score1[i].size(); j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}*/

// �ǽ����� 2
/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<vector<int>> score;
	int tot;
	double avg;
	int best_student = 0;
	double highest_avg = 0;

	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "��° �л��� ����, ����, ���� ������ �Է�: ";
		vector<int> temp;
		for (int j = 0; j < 3; j++) {
			int input;
			cin >> input;
			temp.push_back(input);
		}
		score.push_back(temp);
	}

	for (int i = 0; i < 3; i++) {
		tot = 0;
		for (int j = 0; j < 3; j++) {
			tot += score[i][j];
		}
		avg = tot / 3.0;
		if (avg > highest_avg) {
			highest_avg = avg;
			best_student = i;
		}
	}
	cout << "�ֿ�� �л��� " << best_student + 1 << "��° �л��̰� ��������� " << highest_avg << "���̴�." << endl;
	return 0;
}*/

// �ǽ����� 3
/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<vector<int>> score = { {-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25} };

	int max_value = score[0][0];
	int max_row = 0;
	int max_col = 0;


	for (int i = 0; i < score.size(); ++i) {
		for (int j = 0; j < score[i].size(); ++j) {
			if (score[i][j] > max_value) {
				max_value = score[i][j];
				max_row = i;
				max_col = j;
			}
		}
	}

	cout << "�ִ밪�� " << max_value << "\n��ġ�� " << max_row + 1 << "�� " << max_col + 1 << "��" << endl;


	return 0;
}*/

// �ǽ����� 4
/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<vector<int>> score = { {-5, 2, 35}, {-20, 5, 100}, {-75, 5, -25} };

	for (int i = 0; i < score.size(); i++) {
		for (int j = 0; j < score[i].size(); j++) {
			if (score[i][j] < 0) {
				score[i][j] = 0;
			}
			else {
				score[i][j] = 255;
			}
		}
	}
	cout << "�������" << endl;
	for (int i = 0; i < score.size(); i++) {
		for (int j = 0; j < score[i].size(); j++) {
			cout << score[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}*/