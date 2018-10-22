//#include<iostream>
//#define MAXN 11
//using namespace std;
//int num[MAXN] = { 0 };
//int visit[MAXN] = { 0 };
//int n[] = { 0, 0 };
//int N;
//int ans = 0;
//int sum;
//void dfs(int start) {
//	if (start == 2) {
//		ans += n[0] * 10 + n[1];
//		return;
//	}
//	for (int i = 0; i < N; i++) {
//		if (visit[i] == 0) {
//			visit[i] = 1;
//			n[start] = num[i];
//			dfs(start + 1);
//			visit[i] = 0;
//		}
//	}
//}
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> num[i];
//	}
//	dfs(0);
//	cout << ans << endl;
//	return 0;
//}
#include<iostream>
#define MAXN 11
int num[MAXN] = { 0 };
int visit[MAXN] = { 0 };
int sum[2] = { 0 };
using namespace std;
int N;
int ans = 0;
void dfs(int start) {
	if (start == 2) {
		ans += sum[0] * 10 + sum[1];
		return;
	}
	for (int i = 0; i < N; i++) {
		if (visit[i] == 0) {
			visit[i] = 1;
			sum[start] = num[i];
			dfs(start + 1);
			visit[i] = 0;
		}
	}
}
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	dfs(0);
	cout << ans << endl;
	return 0;
}