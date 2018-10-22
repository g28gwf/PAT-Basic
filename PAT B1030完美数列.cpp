//#include<iostream>
//#include<algorithm>
//#include<cmath>
//#define MAXN 100001
//using namespace std;
//int num[MAXN] = { 0 };
//int main() {
//	long long p;
//	int N;
//	int cnt = 0;
//	cin >> N >> p;
//	for (int i = 0; i < N; i++) {
//		cin >> num[i];
//	}
//	sort(num, num + N);
//	for (int i = 0; i < N; i++) {
//		for (int j = i + cnt; j < N; j++) {
//			if (num[j] <= num[i] * p) {
//				cnt = max(j - i + 1, cnt);
//			}
//			else {
//				break;
//			}
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	long long N, p;
	cin >> N >> p;
	vector<long long> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + ans; j < N; j++) {
			if (v[j] > v[i] * p) {
				break;
			}
			ans = ans > j - i + 1 ? ans : j - i + 1;
		}
	}
	cout << ans << endl;
	return 0;
}