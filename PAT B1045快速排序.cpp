//#include<iostream>
//#include<algorithm>
//#include<vector>
//#define MAXN 100001
//using namespace std;
//int num1[MAXN] = { 0 };
//int num2[MAXN] = { 0 };
//bool isChecked[MAXN];
//vector<int> v;
//int main() {
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> num1[i];
//		num2[i] = num1[i];
//	}
//	sort(num1, num1 + N);
//	int maxN = -1;
//	for (int i = 0; i < N; i++) {
//		if (num1[i] == num2[i] && num1[i] > maxN) {
//			v.push_back(num1[i]);
//		}
//		if (maxN < num2[i]) {
//			maxN = num2[i];
//		}
//	}
//	cout << v.size() << endl;
//	if (v.size() == 0) {
//		cout << endl;
//	} else {
//		for (int i = 0; i < v.size(); i++) {
//			if (i != v.size() - 1) {
//				cout << v[i] << ' ';
//			} else {
//				cout << v[i] << endl;
//			}
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	vector<int> v1(N);
	vector<int> v2(N);
	vector<int> v3;
	for (int i = 0; i < N; i++) {
		cin >> v1[i];
		v2[i] = v1[i];
	}
	int maxN = -1;
	sort(v1.begin(), v1.end());
	for (int i = 0; i < v1.size(); i++) {
		if (v1[i] == v2[i] && v2[i] > maxN) {
			v3.push_back(v2[i]);
		}
		if (v2[i] > maxN) {
			maxN = v2[i];
		}
	}
	cout << v3.size() << endl;
	if (v3.size() != 0) {
		for (int i = 0; i < v3.size(); i++) {
			if (i != v3.size() - 1) {
				cout << v3[i] << ' ';
			}else {
				cout << v3[i] << endl;
			}
		}
	}else {
		cout << endl;
	}
	return 0;
}