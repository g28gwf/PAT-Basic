//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//bool check(string s) {
//	for (int i = 0; i < s.size() / 2; i++) {
//		if (s[i] != s[s.size() - 1 - i]) {
//			return false;
//		}
//	}
//	return true;
//}
//int main() {
//	string A, B;
//	cin >> A;
//	int times = 0;
//	bool isValid = false;
//	string C(A.size(), ' ');
//	while (true) {
//		if (check(A) == true) {
//			cout << A << " is a palindromic number." << endl;
//			break;
//		}
//		if (times == 10) {
//			cout << "Not found in 10 iterations." << endl;
//			break;
//		}
//		B = A;
//		reverse(B.begin(), B.end());
//		int c = 0;
//		for (int i = A.size() - 1; i >= 0; i--) {
//			int sum = A[i] - '0' + B[i] - '0' + c;
//			if (sum < 10) {
//				C[i] = sum + '0';
//			}else {
//				C[i] = sum % 10 + '0';
//			}
//			c = sum / 10;
//		}
//		if (c == 1) {
//			C = '1' + C;
//		}
//		cout << A << " + " << B << " = " << C << endl;
//		A = C;
//		times++;
//	}
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	string A;
	cin >> A;
	string B(A.size(), ' ');
	for (int i = 0; i < A.size(); i++) {
		B[A.size() - i - 1] = A[i];
	}
	int cnt = 0;
	bool isValid = true;
	for (int i = 0; i < A.size() / 2; i++) {
		if (A[i] != A[A.size() - i - 1]) {
			isValid = false;
			break;
		}
	}
	if (isValid == true) {
		cout << A << " is a palindromic number." << endl;
	}else {
		while (cnt < 10) {
			string B(A.size(), ' ');
			for (int i = 0; i < A.size(); i++) {
				B[A.size() - i - 1] = A[i];
			}
			string temp(A.size(), '0');
			int c = 0;
			for (int i = A.size() - 1; i >= 0; i--) {
				int t = (A[i] - '0') + (B[i] - '0') + c;
				temp[i] = t >= 10 ? t - 10 + '0' : t + '0';
				c = t >= 10 ? 1 : 0;
			}
			if (c == 1) {
				temp = '1' + temp;
			}
			bool isValid = true;
			for (int i = 0; i < temp.size() / 2; i++) {
				if (temp[i] != temp[temp.size() - i - 1]) {
					isValid = false;
					break;
				}
			}
			if (isValid == true) {
				cout << A << " + " << B << " = " << temp << endl;
				cout << temp << " is a palindromic number." << endl;
				break;
			}
			else {
				cout << A << " + " << B << " = " << temp << endl;
				A = temp;
			}
			cnt++;
		}
		if (cnt == 10) {
			cout << "Not found in 10 iterations." << endl;
		}

	}
	return 0;
}