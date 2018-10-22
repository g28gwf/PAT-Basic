//#include<iostream>
//#include<iomanip>
//#define MAXN 100001
//using namespace std;
//int main()
//{
//	cout.precision(2);
//	double num[MAXN] = { 0.0 };
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> num[i];
//	}
//	double sum = 0.0;
//	for (int i = 0; i < N; i++) {
//		sum += num[i] * (i + 1) * (N - i);
//	}
//	cout << fixed << sum << endl;
//	return 0;
//}
#include<iostream>
#include<vector>
using namespace std;
int main() {
	int N;
	cin >> N;
	double v[1000001] = { 0 };
	//vector<double> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	double ans = 0;
	for (int i = 0; i < N; i++) {
		ans += 1.0 * (i + 1) * (N - i) * v[i];
	}
	printf("%.2lf\n", ans);
	return 0;
}