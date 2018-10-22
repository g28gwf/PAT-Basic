//#include<iostream>
//#include<algorithm>
//#include<cmath>
//#include<vector>
//using namespace std;
//bool cmp(int a, int b) {
//	return a > b;
//}
//int main() {
//	int N;
//	cin >> N;
//	int m, n;
//	int temp = sqrt((double)N);
//	while (temp != 0) {
//		if (N % temp == 0) {
//			n = temp;
//			break;
//		}
//		temp--;
//	}
//	m = N / n;
//	vector<int> v(N);
//	for (int i = 0; i < N; i++) {
//		cin >> v[i];
//	}
//	sort(v.begin(), v.end(), cmp);
//	int level = m / 2 + m % 2;
//	int index = 0;
//	vector<vector<int> > arr(m, vector<int>(n));
//	for (int i = 0; i < level; i++) {
//		for (int j = i; j <= n - i - 1 && index < N; j++) {
//			arr[i][j] = v[index++];
//		}
//		for (int j = i + 1; j <= m - i - 2 && index < N; j++) {
//			arr[j][n - i - 1] = v[index++];
//		}
//		for (int j = n - i - 1; j >= i && index < N; j--) {
//			arr[m - 1 - i][j] = v[index++];
//		}
//		for (int j = m - i - 2; j >= i + 1 && index < N; j--) {
//			arr[j][i] = v[index++];
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			if (j != n - 1) {
//				cout << arr[i][j] << ' ';
//			} else {
//				cout << arr[i][j] << endl;
//			}
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<cmath>
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
	int m, n;
	int temp = sqrt(N);
	while (temp != 0) {
		if (N % temp == 0) {
			n = temp;
			break;
		}
		temp--;
	}
	m = N / n;
	int level = m / 2 + m % 2;
	vector<vector<int>> arr(m);
	for (int i = 0; i < arr.size(); i++) {
		arr[i].resize(n);
	}
	int index = 0;
	for (int i = 0; i < level; i++) {
		for (int j = i; j < n - i && index < N; j++, index++) {
			arr[i][j] = v[index];
		}
		for (int j = i + 1; j < m - i - 1 && index < N; j++, index++) {
			arr[j][n - i - 1] = v[index];
		}
		for (int j = n - i - 1; j >= i + 1 && index < N; j--, index++) {
			arr[m - i - 1][j] = v[index];
		}
		for (int j = m - i - 1; j >= i + 1 && index < N; j--, index++) {
			arr[j][i] = v[index];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j != n - 1) {
				cout << arr[i][j] << ' ';
			}else {
				cout << arr[i][j] << endl;
			}
		}
	}
	return 0;
}