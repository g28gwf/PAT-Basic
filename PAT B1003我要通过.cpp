//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	string s;
//	getchar();
//	for (int i = 0; i < n; i++) {
//		getline(cin, s);
//		map<char, int> m;
//		int indexP, indexT;
//		for (int j = 0; j < s.size(); j++) {
//			m[s[j]]++;
//			if (s[j] == 'P') {
//				indexP = j;
//			}
//			if (s[j] == 'T') {
//				indexT = j;
//			}
//		}
//		if (m.size() == 3 && (indexT - indexP != 1) && m['P'] == 1 && m['T'] == 1 && ((s.size() - indexT - 1) == indexP * (indexT - indexP - 1))) {
//			cout << "YES" << endl;
//		}
//		else {
//			cout << "NO" << endl;
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	getchar();
	for (int i = 0; i < n; i++) {
		string s;
		getline(cin, s);
		int P, T;
		map<char, int> m;
		for (int j = 0; j < s.size(); j++) {
			m[s[j]]++;
			if (s[j] == 'P') {
				P = j;
			}
			if (s[j] == 'T') {
				T = j;
			}
		}
		if (m.size() == 3 && m['P'] == 1 && m['T'] == 1 &&
			P * (T - P - 1) == (s.size() - T - 1) && T - P != 1) {
			cout << "YES" << endl;
		}else {
			cout << "NO" << endl;
		}
	}
	return 0;
}