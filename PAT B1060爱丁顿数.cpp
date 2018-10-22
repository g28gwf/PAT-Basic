//#include<iostream>
//#include<algorithm>
//#define MAXN 100001
//using namespace std;
//int num[MAXN] = { 0 };
//bool cmp(int a, int b) {
//	return a > b;
//}
//int main() {
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> num[i];
//	}
//	sort(num, num + N, cmp);
//	int E = 0;
//	while (E <= N && E + 1 < num[E]) {
//		E++;
//	}
//	cout << E << endl;
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	int N;
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), cmp);
	int E = 0;
	for (int i = 0; i < N; i++) {
		if (v[i] > i + 1) {
			E++;
		}
	}
	cout << E << endl;
	return 0;
}