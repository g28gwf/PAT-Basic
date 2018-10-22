//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//int main() {
//	//freopen("D:\\Ëã·¨±Ê¼Ç\\ÀýÌâ\\PAT\\input.txt", "r", stdin);
//	int N, M;
//	cin >> N >> M;
//	vector<int> score(M);
//	vector<int> wrongNum(M);
//	vector<set<char>> rightAnswer(M);
//	for (int i = 0; i < M; i++) {
//		int temp, num, correctNum;
//		cin >> temp >> num >> correctNum;
//		score[i] = temp;
//		for (int j = 0; j < correctNum; j++) {
//			char option;
//			cin >> option;
//			rightAnswer[i].insert(option);
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		getchar();
//		int fullScore = 0;
//		for (int j = 0; j < M; j++) {
//			set<char> answer;
//			int num;
//			char option;
//			if (j != 0) {
//				getchar();
//				//scanf(" ");
//			}
//			scanf("(%d", &num);
//			for (int k = 0; k < num; k++) {
//				cin >> option;
//				answer.insert(option);
//			}
//			getchar();
//			//scanf(")");
//			if (answer == rightAnswer[j]) {
//				fullScore += score[j];
//			}else {
//				wrongNum[j]++;
//			}
//		}
//		
//		cout << fullScore << endl;
//	}
//	int maxN = -1;
//	for (int i = 0; i < M; i++) {
//		if (maxN < wrongNum[i]) {
//			maxN = wrongNum[i];
//		}
//	}
//	if (maxN == 0) {
//		cout << "Too simple" << endl;
//	}else {
//		cout << maxN;
//		for (int i = 0; i < M; i++) {
//			if (wrongNum[i] == maxN) {
//				cout << " " << i + 1;
//			}
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<set>
#include<map>
using namespace std;
int main() {
	int N, M;
	cin >> N >> M;
	map<int, int> point;
	map<int, set<char>> option;
	map<int, int> wrongtime;
	for (int i = 0; i < M; i++) {
		int fullScore;
		int num;
		int correctNum;
		cin >> fullScore >> num >> correctNum;
		point[i] = fullScore;
		for (int j = 0; j < correctNum; j++) {
			char temp;
			cin >> temp;
			option[i].insert(temp);
		}
		wrongtime[i + 1] = 0;
	}
	for (int i = 0; i < N; i++) {
		int score = 0;
		getchar();
		for (int j = 0; j < M; j++) {
			if (j != 0) {
				getchar();
			}
			int num;
			scanf("(%d", &num);
			set<char> s;
			for (int k = 0; k < num; k++) {
				char temp;
				cin >> temp;
				s.insert(temp);
			}
			getchar();
			if (s == option[j]) {
				score += point[j];
			}else {
				wrongtime[j + 1]++;
			}
		}
		cout << score << endl;
	}
	int maxN = -1;
	for (auto it = wrongtime.begin(); it != wrongtime.end(); it++) {
		if (it->second > maxN) {
			maxN = it->second;
		}
	}
	if (maxN != 0) {
		cout << maxN;
		for (auto it = wrongtime.begin(); it != wrongtime.end(); it++) {
			if (it->second == maxN) {
				cout << ' ' << it->first;
			}
		}
	}else {
		cout << "Too simple" << endl;
	}
	return 0;
}