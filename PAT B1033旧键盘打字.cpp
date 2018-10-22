//#include<iostream>
//#include<string>
//using namespace std;
//int hashTable[150] = { 0 };
//int main() {
//	//freopen("D:\\Ëã·¨±Ê¼Ç\\ÀýÌâ\\PAT\\input.txt", "r", stdin);
//	string brokenKeys;
//	//cin >> brokenKeys;
//	getline(cin, brokenKeys);
//	for (int i = 0; i < brokenKeys.size(); i++) {
//		hashTable[brokenKeys[i]] = 1;
//		if (brokenKeys[i] >= 'A' && brokenKeys[i] <= 'Z') {
//			hashTable[brokenKeys[i] + 32] = 1;
//		}
//	}
//	//getchar();
//	string s;
//	cin >> s;
//	for (int i = 0; i < s.size(); i++) {
//		if (hashTable['+'] == 1 && s[i] >= 'A' && s[i] <= 'Z') {
//			s.replace(i, 1, "");
//			i--;
//		}
//		if (hashTable[s[i]] == 1) {
//			s.replace(i, 1, "");
//			i--;
//		}
//	}
//	cout << s << endl;
//	return 0;
//}
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	vector<int> v(150);
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			v[s[i] + 32] = 1;
			v[s[i]] = 1;
		}else {
			v[s[i]] = 1;
		}
	}
	string input;
	cin >> input;
	for (int i = 0; i < input.size(); i++) {
		if (v['+'] == 1 && input[i] >= 'A' &&input[i] <= 'Z') {
			input.replace(i, 1, "");
			i--;
		}
		if (v[input[i]] == 1) {
			input.replace(i, 1, "");
			i--;
		}
	}
	cout << input <<endl;
	return 0;
}