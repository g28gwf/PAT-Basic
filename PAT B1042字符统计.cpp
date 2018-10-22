//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//map<char, int> m;
//int main() {
//	string s;
//	getline(cin, s);
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] >= 'A' && s[i] <= 'Z') {
//			m[s[i] + 32]++;
//		} else if(s[i] >= 'a' && s[i] <= 'z'){
//			m[s[i]]++;
//		}
//	}
//	int maxN = -1;
//	char mostChar;
//	for (map<char, int>::iterator it = m.begin(); it != m.end(); it++) {
//		if (maxN < (*it).second) {
//			maxN = (*it).second;
//			mostChar = (*it).first;
//		}
//	}
//	cout << mostChar << ' ' << maxN << endl;
//	return 0;
//}
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main() {
	map<char, int> m;
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z') {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				m[s[i] + 32]++;
			}else {
				m[s[i]]++;
			}
		}
	}
	char mostChar;
	int maxN = -1;
	for (auto it = m.begin(); it != m.end(); it++) {
		if (it->second > maxN) {
			mostChar = it->first;
			maxN = it->second;
		}
	}
	cout << mostChar << ' ' << maxN << endl;
	return 0;
}
