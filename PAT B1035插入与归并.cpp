//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int main() {
//	int N;
//	cin >> N;
//	vector<int> v1(N);
//	vector<int> v2(N);
//	for (int i = 0; i < N; i++) {
//		cin >> v1[i];
//	}
//	for (int i = 0; i < N; i++) {
//		cin >> v2[i];
//	}
//	int index;
//	for (index = 1; index < N; index++) {
//		if (v2[index - 1] > v2[index]) {
//			break;
//		}
//	}
//	int step = index;
//	for (; index < N; index++) {
//		if (v1[index] != v2[index]) {
//			break;
//		}
//	}
//	if (index == N) {
//		cout << "Insertion Sort" << endl;
//		sort(v2.begin(), v2.begin() + step + 1);
//		for (int i = 0; i < N; i++) {
//			if (i != N - 1) {
//				cout << v2[i] << ' ';
//			}else {
//				cout << v2[i] << endl;
//			}
//		}
//	}else {
//		cout << "Merge Sort" << endl;
//		bool isFinished = false;
//		int k = 1;
//		while (isFinished != true) {
//			int i;
//			for (i = 0; i < N; i++) {
//				if (v1[i] != v2[i]) {
//					break;
//				}
//			}
//			if (i == N) {
//				isFinished = true;
//			}
//			k *= 2;
//			for (int i = 0; i < N / k; i++) {
//				sort(v1.begin() + i * k, v1.begin() + (i + 1) * k);
//			}
//			sort(v1.begin() + N / k * k, v1.end());
//		}
//		for (int i = 0; i < N; i++) {
//			if (i != N - 1) {
//				cout << v1[i] << ' ';
//			}
//			else {
//				cout << v1[i] << endl;
//			}
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int N;
	cin >> N;
	vector<int> v1(N), v2(N);
	for (int i = 0; i < N; i++) {
		cin >> v1[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> v2[i];
	}
	int index = 1;
	for (; index < N; index++) {
		if (v2[index] < v2[index - 1]) {
			break;
		}
	}
	int step = index + 1;
	for (; index < N; index++) {
		if (v1[index] != v2[index]) {
			break;
		}
	}
	if (index == N) {
		cout << "Insertion Sort" << endl;
		sort(v1.begin(), v1.begin() + step);
		for (int i = 0; i < N; i++) {
			if (i != N - 1) {
				cout << v1[i] << ' ';
			}else {
				cout << v1[i] << endl;
			}
		}
	}else {
		cout << "Merge Sort" << endl;
		int k = 1;
		while (true) {
			k *= 2;
			for (int i = 0; i < N / k; i += 1) {
				sort(v1.begin() + i * k, v1.begin() + (i + 1) * k);
			}
			sort(v1.begin() + N - N % k, v1.end());
			int j;
			for (j = 0; j < N; j++) {
				if (v1[j] != v2[j]) {
					break;
				}
			}
			if (j == N) {
				break;
			}
		}
		k *= 2;
		for (int i = 0; (i + 1) * k <= N - N % k; i += 1) {
			sort(v1.begin() + i * k, v1.begin() + (i + 1) * k);
		}
		sort(v1.begin() + N - N % k, v1.end());
		for (int i = 0; i < N; i++) {
			if (i != N - 1) {
				cout << v1[i] << ' ';
			}
			else {
				cout << v1[i] << endl;
			}
		}
	}
	return 0;
}