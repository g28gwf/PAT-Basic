//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string N;
//	cin >> N;
//	string A, B;
//	cin >> A >> B;
//	int len1 = N.size() - A.size();
//	int len2 = N.size() - B.size();
//	string zero1(len1, '0');
//	string zero2(len2, '0');
//	A = zero1 + A;
//	B = zero2 + B;
//	string s(N.size(), '0');
//	int c = 0;
//	for (int i = N.size() - 1; i >= 0; i--) {
//		if (N[i] != '0') {
//			s[i] = (A[i] - '0' + B[i] - '0' + c) % (N[i] - '0') + '0';
//			c = (A[i] - '0' + B[i] - '0' + c) / (N[i] - '0');
//		}else {
//			s[i] = (A[i] - '0' + B[i] - '0' + c) % 10 + '0';
//			c = (A[i] - '0' + B[i] - '0' + c) / 10;
//		}
//	}
//	if (c == 1) {
//		s.insert(s.begin(), '1');
//	}
//	bool isNotZero = false;
//	for (int i = 0; i < s.size(); i++) {
//		if (isNotZero == true || s[i] != '0') {
//			cout << s[i];
//			isNotZero = true;
//		}
//	}
//	if (isNotZero == false) {
//		cout << 0 << endl;
//	}
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
int main() {
	string N, A, B;
	cin >> N >> A >> B;
	string zero1(N.size() - A.size(), '0');
	A = zero1 + A;
	string zero2(N.size() - B.size(), '0');
	B = zero2 + B;
	int c = 0;
	string ans = "";
	for (int i = N.size() - 1; i >= 0; i--) {
		char temp = ((A[i] - '0') + (B[i] - '0') + c) % (N[i] - '0' == 0 ? 10 : N[i] - '0') + '0';
		c = ((A[i] - '0') + (B[i] - '0') + c) / (N[i] - '0' == 0 ? 10 : N[i] - '0');
		ans = temp + ans;
	}
	if (c != 0) {
		ans = (char)(c + '0') + ans;
	}
	bool isFirst = true;
	bool isZero = true;
	for (int i = 0; i < ans.size(); i++) {
		if (isFirst == true && ans[i] == '0') {
			continue;
		}else if (isFirst == true && ans[i] != '0') {
			isFirst = false;
			isZero = false;
			cout << ans[i];
		}else if (isFirst == false) {
			cout << ans[i];
		}

	}
	if (isZero == true) {
		cout << '0' << endl;
	}
	return 0;
}