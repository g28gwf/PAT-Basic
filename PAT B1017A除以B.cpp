//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string A, B;
//	string Q, R;
//	cin >> A >> B;
//	int remain = 0;
//	int divSor = B[0] - '0';
//	for (int i = 0; i < A.size(); i++) {
//		int divEnd = remain * 10 + A[i] - '0';
//		int temp = divEnd / divSor;
//		remain = divEnd % divSor;
//		if (temp == 0) {
//			if (Q.size() != 0) {
//				Q += '0';
//			}
//		} else {
//			Q += temp + '0';
//		}
//	}
//	R += remain + '0';
//	if (Q.size() == 0) {
//		Q += '0';
//	}
//	cout << Q << ' ' << R << endl;
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string A, B;
//	cin >> A >> B;
//	string Q = "", R;
//	int a;
//	int b = B[0] - '0';
//	int q = 0;
//	int r = 0;
//	bool isFirst = true;
//	for (int i = 0; i < A.size(); i++) {
//		a = A[i] - '0' + r * 10;
//		q = a / b;
//		r = a % b;
//		if (q == 0 && Q.size() == 0) {
//			continue;
//		}
//		Q += q + '0';
//	}
//	R = r + '0';
//	if (Q.size() == 0) {
//		Q += '0';
//	}
//	cout << Q << ' ' << R << endl;
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
int main() {
	int R = 0;
	string A;
	int B;
	string Q = "";
	cin >> A >> B;
	for (int i = 0; i < A.size(); i++) {
		char q = (R * 10 + A[i] - '0') / B + '0';
		Q += q;
		R = (R * 10 + A[i] - '0') % B;
	}
	if (Q.size() == 1 && Q[0] == '0') {
		cout << '0';
	}else {
		int index = 0;
		while (Q[index] == '0') {
			index++;
		}
		for (; index < Q.size(); index++) {
			cout << Q[index];
		}
	}
	cout << ' ' << R << endl;
	return 0;
}