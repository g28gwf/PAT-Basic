//#include<iostream>
//#include<vector>
//using namespace std;
//int bin[5] = {1, 2, 4, 8, 16};
//vector<int> correctAns;
//vector<int> score;
//int main() {
//	//freopen("D:\\算法笔记\\例题\\PAT\\input.txt", "r", stdin);
//	int N, M;
//	cin >> N >> M;
//	vector<vector<int> > wrongTimes(M);
//	for (int i = 0; i < M; i++) {
//		int fullScore, num, correctNum;
//		cin >> fullScore >> num >> correctNum;
//		score.push_back(fullScore);
//		int binValue = 0;
//		for (int j = 0; j < correctNum; j++) {
//			char temp;
//			cin >> temp;
//			binValue += bin[temp - 'a'];
//		}
//		correctAns.push_back(binValue);
//		wrongTimes[i].resize(5);
//	}
//	for (int i = 0; i < N; i++) {
//		getchar();
//		double fullScore = 0;
//		for (int j = 0; j < M; j++) {
//			if (j != 0) {
//				getchar();
//			}
//			int num;
//			scanf("(%d", &num);
//			char option;
//			int tempValue = 0;
//			for (int k = 0; k < num; k++) {
//				cin >> option;
//				tempValue += bin[option - 'a'];
//			}
//			getchar();
//			int value = correctAns[j] ^ tempValue;
//			if (value == 0) {
//				fullScore += score[j];
//			}else {
//				if ((correctAns[j] | tempValue) == correctAns[j]) {
//					fullScore += 1.0 * score[j] * 0.5;
//				}
//				for (int l = 0; l < 5; l++) {
//					if ((value & bin[l]) != 0) {
//						wrongTimes[j][l]++;
//					}
//				}
//			}
//		}
//		printf("%0.1lf\n", fullScore);
//	}
//	int maxCount = -1;
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (maxCount < wrongTimes[i][j]) {
//				maxCount = wrongTimes[i][j];
//			}
//		}
//	}
//	if (maxCount == 0) {
//		cout << "Too simple" << endl;
//	}else {
//		for (int i = 0; i < M; i++) {
//			for (int j = 0; j < wrongTimes[i].size(); j++) {
//				if (maxCount == wrongTimes[i][j]) {
//					cout << maxCount << " " << i + 1 << "-" << (char)(j + 'a') << endl;
//				}
//			}
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<vector>
using namespace std;
int bin[5] = { 1, 2, 4, 8, 16 };
vector<int> correctAnsNum;
vector<int> fullScore;
int main() {
	freopen("D:\\算法笔记\\例题\\PAT\\input.txt", "r", stdin);
	int N, M;
	cin >> N >> M;
	vector<vector<int> > wrongTimes(M);
	for (int i = 0; i < M; i++) {
		int score;
		int num, correctNum;
		cin >> score >> num >> correctNum;
		fullScore.push_back(score);
		int ansNum = 0;
		for (int j = 0; j < correctNum; j++) {
			char temp;
			cin >> temp;
			ansNum += bin[temp - 'a'];
		}
		correctAnsNum.push_back(ansNum);
		wrongTimes[i].resize(5);
	}
	for (int i = 0; i < N; i++) {
		getchar();
		double score = 0;
		for (int j = 0; j < M; j++) {
			if (j != 0) {
				getchar();
			}
			int num;
			scanf("(%d", &num);
			char option;
			int ansNum = 0;
			for (int k = 0; k < num; k++) {
				cin >> option;
				ansNum += bin[option - 'a'];
			}
			if ((ansNum ^ correctAnsNum[j]) == 0) {
				score += fullScore[j];
			}else {
				if ((ansNum | correctAnsNum[j]) == correctAnsNum[j]) {
					score += 1.0 * fullScore[j] / 2;
				}
				for (int k = 0; k < 5; k++) {
					if (((ansNum ^ correctAnsNum[j]) & bin[k]) != 0) {
						wrongTimes[j][k]++;
					}
				}
			}
			getchar();
		}
		printf("%.1lf\n", score);
	}
	int maxN = -1;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < 5; j++) {
			if (maxN < wrongTimes[i][j]) {
				maxN = wrongTimes[i][j];
			}
		}
	}
	if (maxN == 0) {
		cout << "Too simple" << endl;
	}
	else {
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < 5; j++) {
				if (maxN == wrongTimes[i][j]) {
					cout << maxN << ' ' << i + 1 << '-' << (char)(j + 'a') << endl;
				}
			}
		}
	}
	return 0;
}