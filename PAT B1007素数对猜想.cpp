//#include<iostream>
//#define MAX 100001
//using namespace std;
//struct D{
//	int pn;
//	int pnn;
//}d[MAX];
//int main()
//{
//	int Prime[MAX] = {0};
//	int visit1[MAX] = {0};
//	int len = 0;
//	for(int i = 2; i < MAX; i++){
//		if(visit1[i] == 0){
//			Prime[len++] = i;
//			for(int j = 2 * i; j < MAX; j += i)
//				visit1[j] = 1;
//		}
//	}
////	for(int i = 0; i < 20; i++)
////		cout << Prime[i] << endl;
//	int n;
//	int cnt = 0;
//	cin >> n;
//	for(int i = 1; Prime[i] <= n; i++){
//		if(Prime[i] - Prime[i - 1] == 2){
//			d[cnt++] = {Prime[i - 1], Prime[i]};
//		}
//	}
//	cout << cnt << endl;
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
	int index = 0;
	for (int i = 2; i < MAXN; i++) {
		if (isNotPrime[i] == 0) {
			prime[index++] = i;
		}
	}
}
int main() {
	initTable();
	int N;
	cin >> N;
	int ans = 0;
	for (int i = 1; ; i++) {
		if (prime[i] > N) {
			break;
		}
		if (prime[i] - prime[i - 1] == 2) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}