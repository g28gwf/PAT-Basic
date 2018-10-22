//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//map<char, int> m;
//int main() {
//	string s;
//	cin >> s;
//	int cnt = 0;
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] == 'P' || s[i] == 'A' || s[i] == 'T' ||
//			s[i] == 'e' || s[i] == 's' || s[i] == 't') {
//			m[s[i]]++;
//			cnt++;
//		}
//	}
//	while (cnt != 0) {
//		if (m['P'] != 0) {
//			cout << 'P';
//			m['P']--;
//			cnt--;
//		}
//		if (m['A'] != 0) {
//			cout << 'A';
//			m['A']--;
//			cnt--;
//		}
//		if (m['T'] != 0) {
//			cout << 'T';
//			m['T']--;
//			cnt--;
//		}
//		if (m['e'] != 0) {
//			cout << 'e';
//			m['e']--;
//			cnt--;
//		}
//		if (m['s'] != 0) {
//			cout << 's';
//			m['s']--;
//			cnt--;
//		}
//		if (m['t'] != 0) {
//			cout << 't';
//			m['t']--;
//			cnt--;
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin >> str;
	int P = 0, A = 0, T = 0, e = 0, s = 0, t = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'P') {
			P++;
		}
		if (str[i] == 'A') {
			A++;
		}
		if (str[i] == 'T') {
			T++;
		}
		if (str[i] == 'e') {
			e++;
		}
		if (str[i] == 's') {
			s++;
		}
		if (str[i] == 't') {
			t++;
		}
	}
	while(P != 0 || A != 0 || T != 0 || e != 0 || s != 0 || t != 0) {
		if (P != 0) {
			cout << 'P';
			P--;
		}
		if (A != 0) {
			cout << 'A';
			A--;
		}
		if (T != 0) {
			cout << 'T';
			T--;
		}
		if (e != 0) {
			cout << 'e';
			e--;
		}
		if (s != 0) {
			cout << 's';
			s--;
		}
		if (t != 0) {
			cout << 't';
			t--;
		}
	}
	return 0;
}