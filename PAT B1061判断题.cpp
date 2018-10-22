//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	//freopen("D:\\Ëã·¨±Ê¼Ç\\ÀýÌâ\\PAT\\input.txt", "r", stdin);
//	int N, M;
//	cin >> N >> M;
//	vector<int> score(M);
//	vector<int> answer(M);
//	for (int i = 0; i < M; i++) {
//		cin >> score[i];
//	}
//	for (int i = 0; i < M; i++) {
//		cin >> answer[i];
//	}
//	for (int i = 0; i < N; i++) {
//		int fullScore = 0;
//		for (int j = 0; j < M; j++) {
//			int temp;
//			cin >> temp;
//			if (temp == answer[j]) {
//				fullScore += score[j];
//			}
//		}
//		cout << fullScore << endl;
//	}
//	return 0;
//}
#include<iostream>
#include<vector>
using namespace std;
int main() {
	int N, M;
	cin >> N >> M;
	vector<int> score(M);
	vector<int> correctOption(M);
	for (int i = 0; i < M; i++) {
		cin >> score[i];
	}
	for (int i = 0; i < M; i++) {
		cin >> correctOption[i];
	}
	for (int i = 0; i < N; i++) {
		int sum = 0;
		for (int j = 0; j < M; j++) {
			int option;
			cin >> option;
			if (option == correctOption[j]) {
				sum += score[j];
			}
		}
		cout << sum << endl;
	}
	return 0;
}