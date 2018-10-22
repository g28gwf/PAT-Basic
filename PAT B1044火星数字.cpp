//#include<iostream>
//#include<string>
//#include<map>
//#define MAXN 169
//using namespace std;
//string high[13] = {"", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
//string low[13] = { "", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
//string num[MAXN];
//map<string, int> m;
//int getInt(string s)
//{
//	return atoi(s.c_str());
//}
//void initTable() {
//	num[0] = "tret";
//	for (int i = 1; i < MAXN; i++) {
//		string temp;
//		temp += high[i / 13];
//		if (low[i % 13] != "" && high[i / 13] != "") {
//			temp += ' ';
//		}
//		temp += low[i % 13];
//		m[temp] = i;
//		num[i] = temp;
//	}
//}
//int main() {
//	//freopen("D:\\Ëã·¨±Ê¼Ç\\ÀýÌâ\\PAT\\input.txt", "r", stdin);
//	initTable();
//	int N;
//	cin >> N;
//	getchar();
//	for (int i = 0; i < N; i++) {
//		string temp;
//		int t;
//		getline(cin, temp);
//		if (temp[0] >= '0' && temp[0] <= '9') {
//			t = getInt(temp);
//			cout << num[t] << endl;
//			continue;
//		}else {
//			cout << m[temp] << endl;
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<map>
#include<string>
using namespace std;
string low[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string high[13] = {"", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
map<string, int> mHigh;
map<string, int> mLow;
int main() {
	for (int i = 0; i < 13; i++) {
		mHigh[high[i]] = i;
		mLow[low[i]] = i;
	}
	mLow[""] = 0;
	int N;
	cin >> N;
	getchar();
	for (int i = 0; i < N; i++) {
		string s;
		getline(cin, s);
		if (s[0] >= '0' && s[0] <= '9') {
			int n = atoi(s.c_str());
			int h = n / 13;
			int l = n % 13;
			if (h != 0 && l != 0) {
				cout << high[h] << ' ' << low[l] << endl;
			}else if(h != 0 && l == 0){
				cout << high[h] << endl;
			}else {
				cout << low[l] << endl;
			}
		}else {
			int index = 0;
			while (s[index] != ' ' && index < s.size()) {
				index++;
			}
			string h = "";
			string l = "";
			if (index != s.size()) {
				l = s.substr(index + 1);
				h = s.substr(0, index);
			}else {
				l = s.substr(0, index);
				if (mHigh.count(l) != 0) {
					h = l;
					l = "";
				}
			}
			cout << 13 * mHigh[h] + mLow[l] << endl;
		}
	}
	return 0;
}