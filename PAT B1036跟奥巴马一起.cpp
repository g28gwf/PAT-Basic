//#include<iostream>
//using namespace std;
//int main() {
//	int N;
//	char c;
//	cin >> N >> c;
//	int row = (N % 2 == 0) ? N / 2 : N / 2 + 1;
//	for (int i = 0; i < row; i++) {
//		if (i == 0 || i == row - 1) {
//			for (int j = 0; j < N; j++) {
//				cout << c;
//			}
//			cout << endl;
//		} else {
//			for (int j = 0; j < N; j++) {
//				if (j == 0 || j == N - 1) {
//					cout << c;
//				} else {
//					cout << ' ';
//				}
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main() {
	int N;
	char C;
	cin >> N >> C;
	int row = N % 2 == 0 ? N / 2 : N / 2 + 1;
	for (int i = 0; i < row; i++) {
		if (i == 0 || i == row - 1) {
			for (int j = 0; j < N; j++) {
				cout << C;
			}
			cout << endl;
		}else {
			cout << C;
			for (int j = 1; j < N - 1; j++) {
				cout << ' ';
			}
			cout << C << endl;
		}
	}
	return 0;
}