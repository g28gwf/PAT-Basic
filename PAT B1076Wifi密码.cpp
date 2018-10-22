//#include<iostream>
//#include<vector>
//#include<map>
//#include<string>
//using namespace std;
//map<char, int> m;
//int main() {
//	m['A'] = 1;
//	m['B'] = 2;
//	m['C'] = 3;
//	m['D'] = 4;
//	int N;
//	cin >> N;
//	vector<int> v(N);
//	for (int i = 0; i < N; i++) {
//		string s;
//		for (int j = 0; j < 4; j++) {
//			cin >> s;
//			if (s[2] == 'T') {
//				v[i] = m[s[0]];
//				break;
//			}
//		}
//	}
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i];
//	}
//	return 0;
//}
#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
int main() {
	map<char, int> m;
	m['A'] = 1;
	m['B'] = 2;
	m['C'] = 3;
	m['D'] = 4;
	int N;
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 4; j++) {
			string s;
			cin >> s;
			if (s[2] == 'T') {
				v[i] = m[s[0]];
			}
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}
	return 0;
}