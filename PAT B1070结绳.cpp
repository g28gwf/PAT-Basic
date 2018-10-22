//#include<iostream>
//#include<algorithm>
//#define MAXN 10001
//using namespace std;
//double num[MAXN] = { 0 };
//int main() {
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> num[i];
//	}
//	sort(num, num + N);
//	for (int i = 1; i < N; i++) {
//		num[0] = num[0] / 2 + num[i] / 2;
//	}
//	cout << (int)num[0] << endl;
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int N;
	cin >> N;
	vector<double> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	double ans = v[0];
	for (int i = 1; i < N; i++) {
		ans = ans / 2 + v[i] / 2;
	}
	cout << (int)(ans) << endl;
	return 0;
}