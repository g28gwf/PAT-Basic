//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int main() {
//	int N, M;
//	cin >> N >> M;
//	M %= N;
//	//int v[101] = { 0 };
//	vector<int> v(N);
//	for (int i = 0; i < N; i++) {
//		cin >> v[i];
//	}
//	reverse(v.begin(), v.begin() + N);
//	reverse(v.begin(), v.begin() + M);
//	reverse(v.begin() + M, v.begin() + N);
//	for (int i = 0; i < N; i++) {
//		if (i != N - 1) {
//			cout << v[i] << ' ';
//		}else {
//			cout << v[i] << endl;
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int M, N;
	cin >> N >> M;
	M %= N;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	reverse(v.begin(), v.end());
	reverse(v.begin(), v.begin() + M);
	reverse(v.begin() + M, v.end());
	for (int i = 0; i < N; i++) {
		if (i != N - 1) {
			cout << v[i] << ' ';
		}else {
			cout << v[i] << endl;
		}
	}
	return 0;
}