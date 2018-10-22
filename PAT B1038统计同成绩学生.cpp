//#include<iostream>
//#define MAXN 100001
//using namespace std;
//struct Grade {
//	int score;
//	int num;
//}grade[MAXN];
//int num[MAXN] = { 0 };
//int table[MAXN] = { 0 };
//int main() {
//	int N, K;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> num[i];
//		table[num[i]]++;
//	}
//	cin >> K;
//	for (int i = 0; i < K; i++) {
//		cin >> grade[i].score;
//		grade[i].num = table[grade[i].score];
//	}
//	for (int i = 0; i < K; i++) {
//		if (i != K - 1) {
//			cout << grade[i].num << ' ';
//		} else {
//			cout << grade[i].num << endl;
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
	int N;
	cin >> N;
	unordered_map<int, int> m;
	for (int i = 0; i < N; i++) {
		int temp;
		scanf("%d", &temp);
		m[temp]++;
	}
	int K;
	cin >> K;
	for (int i = 0; i < K; i++) {
		int temp;
		cin >> temp;
		if (i != K - 1) {
			cout << m[temp] << ' ';
		}else {
			cout << m[temp] << endl;
		}
	}
	return 0;
}