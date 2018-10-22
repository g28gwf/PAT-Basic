//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//map<int, char> m;
//int main() {
//	//freopen("D:\\Ëã·¨±Ê¼Ç\\ÀýÌâ\\PAT\\input.txt", "r", stdin);
//	m[10] = 'J';
//	m[11] = 'Q';
//	m[12] = 'K';
//	string A, B;
//	cin >> A >> B;
//	bool flag = A.size() > B.size();
//	if (flag) {
//		string zero(A.size() - B.size(), '0');
//		B = zero + B;
//	} else {
//		string zero(B.size() - A.size(), '0');
//		A = zero + A;
//	}
//	string ans(A.size(), ' ');
//	for (int i = A.size() - 1; i >= 0; i -= 2) {
//		int temp = (A[i] - '0' + B[i] - '0') % 13;
//		ans[i] = temp >= 10 ? m[temp] : temp + '0';
//	}
//	for (int i = A.size() - 2; i >= 0; i -= 2) {
//		int temp = B[i] - '0' - (A[i] - '0');
//		ans[i] = temp < 0 ? temp + 10 + '0' : temp + '0';
//	}
//	cout << ans << endl;
//	return 0;
//}
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main() {
	map<int, char> m;
	m[10] = 'J';
	m[11] = 'Q';
	m[12] = 'K';
	string A, B;
	cin >> A >> B;
	int len;
	int d;
	string ans;
	if (A.size() < B.size()) {
		len = B.size();
		d = B.size() - A.size();
		string space(B.size() - A.size(), '0');
		A = space + A;
		ans = B;
	}else {
		len = A.size();
		d = A.size() - B.size();
		string space(A.size() - B.size(), '0');
		B = space + B;
		ans = A;
	}
	bool flag = true;
	for (int i = len - 1; i >= 0; i -= 2) {
		int num = ((A[i] - '0') + (B[i] - '0')) % 13;
		char temp = num >= 10 ?	m[num] : num + '0';
		ans[i] = temp;
	}
	for (int i = len - 2; i >= 0; i -= 2) {
		int num = (B[i] - '0') - (A[i] - '0');
		char temp = num < 0 ? (num + 10 + '0') : num + '0';
		ans[i] = temp;
	}
	cout << ans << endl;
	return 0;
}