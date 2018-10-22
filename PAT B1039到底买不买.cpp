//#include<iostream>
//#include<string>
//#define MAXN 151
//using namespace std;
////int hashTable1[MAXN] = { 0 };
////int hashTable2[MAXN] = { 0 };
//int hashTable[MAXN] = { 0 };
////bool flag[MAXN];
//int main() {
//	//freopen("D:\\Ëã·¨±Ê¼Ç\\ÀýÌâ\\PAT\\input.txt", "r", stdin);
//	string s1, s2;
//	cin >> s1 >> s2;
//	//for (int i = 0; i < s1.size(); i++) {
//	//	hashTable1[s1[i]]++;
//	//}
//	//for (int i = 0; i < s2.size(); i++) {
//	//	hashTable2[s2[i]]++;
//	//}
//	//bool isAble = true;
//	int cnt = 0;
//	for (int i = 0; i < s1.size(); i++) {
//		hashTable[s1[i]]++;
//	}
//	for (int i = 0; i < s2.size(); i++) {
//		hashTable[s2[i]]--;
//		if (hashTable[s2[i]] < 0) {
//			cnt++;
//		}
//	}
//	//for (int i = 0; i < s2.size(); i++) {
//	//	if (hashTable1[s2[i]] < hashTable2[s2[i]]) {
//	//		isAble = false;
//	//		if (flag[s2[i]] == false) {
//	//			cnt += hashTable2[s2[i]] - hashTable1[s2[i]];
//	//			flag[s2[i]] = true;
//	//		}
//	//	}
//	//}
//	if (cnt == 0) {
//		cout << "Yes " << s1.size() - s2.size() << endl;
//	} else {
//		cout << "No " << cnt << endl;
//	}
//	return 0;
//}
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	map<char, int> m;
	for (int i = 0; i < s1.size(); i++) {
		m[s1[i]]++;
	}
	int cnt = 0;
	bool isValid = true;
	for (int i = 0; i < s2.size(); i++) {
		m[s2[i]]--;
		if (m[s2[i]] < 0) {
			cnt++;
			isValid = false;
		}
	}
	if (isValid == true) {
		cout << "Yes " << s1.size() - s2.size() << endl;
	}else {
		cout << "No " << cnt << endl;
	}
	return 0;
}