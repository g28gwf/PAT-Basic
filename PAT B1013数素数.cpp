//#include<iostream>
//#include<cmath>
//#define MAXN 1000001
//using namespace std;
//int isNotPrime[MAXN] = { 0 };
//int prime[MAXN] = { 0 };
//int indexP = 1;
//void initPrime() {
//	isNotPrime[0] = isNotPrime[1] = 1;
//	for (int i = 4; i < MAXN; i += 2) {
//		isNotPrime[i] = 1;
//	}
//	for (int i = 3; i < MAXN; i += 2) {
//		for (int j = 3 * i; j < MAXN; j += i) {
//			isNotPrime[j] = 1;
//		}
//	}
//	for (int i = 2; i < MAXN; i++) {
//		if (isNotPrime[i] == 0) {
//			prime[indexP++] = i;
//		}
//	}
//}
//int main() {
//	initPrime();
//	int M, N;
//	cin >> M >> N;
//	int cnt = 1;
//	for (int i = M; i <= N; i++) {
//		if (cnt % 10 == 0 || i == N) {
//			cout << prime[i] << endl;
//		} else {
//			cout << prime[i] << ' ';
//		}
//		cnt++;
//	}
//	return 0;
//}
#include<iostream>
#define MAXN 1000001
using namespace std;
int isNotPrime[MAXN] = { 0 };
int prime[MAXN] = { 0 };
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
	int index = 1;
	for (int i = 2; i < MAXN; i++) {
		if (isNotPrime[i] == 0) {
			prime[index++] = i;
		}
	}
}
int main() {
	initTable();
	int M, N;
	cin >> M >> N;
	for (int i = M; i <= N; i++) {
		if ((i - M) % 10 != 9 && i != N) {
			cout << prime[i] << ' ';
		}else if((i - M) % 10 == 9 && i != N){
			cout << prime[i] << endl;
		}else if (i == N) {
			cout << prime[i];
		}
	}
	return 0;
}