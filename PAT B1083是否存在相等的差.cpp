//#include<iostream>
//#include<cmath>
//using namespace std;
//int m[10001] = { 0 };
//int main() {
//	int N;
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		int temp;
//		cin >> temp;
//		temp = abs(temp - i);
//		m[temp]++;
//	}
//	for (int i = 10000; i >= 0; i--) {
//		if (m[i] > 1) {
//			cout << i << ' ' << m[i] << endl;
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main() {
	int N;
	cin >> N;
	vector<int> v(N);
	map<int, int> m;
	for (int i = 0; i <= N; i++) {
		m[i] = 0;
	}
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		v[i] = abs(temp - i - 1);
		m[v[i]]++;
	}
	for (auto it = (--m.end()); it != (--m.begin()); it--) {
		if (it->second > 1) {
			cout << it->first << ' ' << it->second << endl;
		}
	}
	return 0;
}