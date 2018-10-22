//#include<iostream>
//#include<cmath>
//#include<map>
//#define MAXN 10001
//using namespace std;
//map<int, int> m;
//int isNotPrime[MAXN] = { 0 };
//void initTable() {
//	isNotPrime[0] = isNotPrime[1] = 1;
//	for (int i = 4; i < MAXN; i += 2) {
//		isNotPrime[i] = 1;
//	}
//	for (int i = 3; i < MAXN; i += 2) {
//		for (int j = 3 * i; j < MAXN; j += i) {
//			isNotPrime[j] = 1;
//		}
//	}
//}
//int main() {
//	//freopen("D:\\Ëã·¨±Ê¼Ç\\ÀýÌâ\\PAT\\input.txt", "r", stdin);
//	initTable();
//	int N, K;
//	cin >> N;
//	int temp;
//	for (int i = 1; i <= N; i++) {
//		cin >> temp;
//		m[temp] = i;
//	}
//	cin >> K;
//	for (int i = 0; i < K; i++) {
//		cin >> temp;
//		if (m[temp] == 1) {
//			printf("%04d", temp);
//			cout << ": Mystery Award" << endl;
//			m[temp] = -1;
//		}else if (m[temp] != 0 && m[temp] != -1) {
//			if (isNotPrime[m[temp]] == 0) {
//				printf("%04d", temp);
//				cout << ": Minion" << endl;
//				m[temp] = -1;
//			}else {
//				printf("%04d", temp);
//				cout << ": Chocolate" << endl;
//				m[temp] = -1;
//			}
//		}else if(m[temp] == 0){
//			printf("%04d", temp);
//			cout << ": Are you kidding?" << endl;
//		}else if (m[temp] == -1) {
//			printf("%04d", temp);
//			cout << ": Checked" << endl;
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<map>
#define MAXN 10001
using namespace std;
int isNotPrime[MAXN] = { 0 };
void initTable() {
	isNotPrime[0] = isNotPrime[1] = 1;
	for (int i = 4; i < MAXN; i += 2) {
		isNotPrime[i] = 1;
	}
	for (int i = 3; i < MAXN; i += 2) {
		for (int j = 3 * i; j < MAXN; j += i) {
			isNotPrime[j] = 1;
		}
	}
}
int main() {
	initTable();
	int N;
	cin >> N;
	map<int, int> rank;
	for (int i = 0; i < N; i++) {
		int ID;
		cin >> ID;
		rank[ID] = i + 1;
	}
	int K;
	cin >> K;
	map<int, bool> isChecked;
	for (int i = 0; i < K; i++) {
		int ID;
		cin >> ID;
		if (rank.count(ID) == 0) {
			printf("%04d: ", ID);
			cout << "Are you kidding?" << endl;
			continue;
		}
		if (isChecked[ID] != true) {
			isChecked[ID] = true;
			if (rank[ID] == 1) {
				printf("%04d: ", ID);
				cout << "Mystery Award" << endl;
			}else if (isNotPrime[rank[ID]] == 0) {
				printf("%04d: ", ID);
				cout << "Minion" << endl;
			}else {
				printf("%04d: ", ID);
				cout << "Chocolate" << endl;
			}
		}else {
			printf("%04d: ", ID);
			cout << "Checked" << endl;
		}
	}
	return 0;
}