//#include<iostream>
//using namespace std;
//int gcd(int a, int b) {
//	while (b != 0) {
//		int temp = b;
//		b = a % b;
//		a = temp;
//	}
//	return a;
//}
//int main() {
//	int N1, M1, N2, M2;
//	int K;
//	scanf("%d/%d %d/%d %d", &N1, &M1, &N2, &M2, &K);
//	double A = 1.0 * N1 / M1, B = 1.0 * N2 / M2;
//	if (A > B) {
//		double temp = A;
//		A = B;
//		B = temp;
//	}
//	bool isFirst = true;
//	for (int i = 1; i < K; i++) {
//		double X = 1.0 * i / K;
//		if (X > A && X < B && gcd(i, K) == 1) {
//			if (isFirst == true) {
//				isFirst = false;
//				cout << i << '/' << K;
//			}else {
//				cout << ' ' << i << '/' << K;
//			}
//		}
//	}
//}
#include<iostream>
using namespace std;
int main() {
	double N1, M1, N2, M2;
	int K;
	scanf("%lf/%lf %lf/%lf %d", &N1, &M1, &N2, &M2, &K);
	double up = N1 / M1, down = N2 / M2;
	if (up > down) {
		double temp = down;
		down = up;
		up = temp;
	}
	bool isFirst = true;
	for (int i = 1; i < K; i++) {
		if (1.0 * i / K > up && 1.0 * i / K < down) {
			int a = i, b = K;
			while (b != 0) {
				int temp = a % b;
				a = b;
				b = temp;
			}
			if (a == 1) {
				if (isFirst == true) {
					isFirst = false;
					cout << i << '/' << K;
				}else {
					cout << ' ' << i << '/' << K;
				}
			}
		}
	}
	return 0;
}