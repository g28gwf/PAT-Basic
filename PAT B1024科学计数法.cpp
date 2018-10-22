//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string s;
//	cin >> s;
//	if (s[0] == '-') {
//		cout << '-';
//	}
//	int i = 1;
//	string originalNum;
//	while (s[i] != 'E') {
//		originalNum += s[i];
//		i++;
//	}
//	int num = atoi(s.substr(s.find('E') + 1).c_str());
//	if (num > 0) {
//		cout << originalNum[0];
//		int i;
//		int cnt = 0;
//		for (i = 2; i < originalNum.size() && cnt < num; i++, cnt++) {
//			cout << originalNum[i];
//		}
//		if (i < originalNum.size()) {
//			cout << '.';
//			while (i < originalNum.size()) {
//				cout << originalNum[i];
//				i++;
//			}
//		}else {
//			while (cnt < num) {
//				cout << '0';
//				cnt++;
//			}
//		}
//	}else {
//		cout << "0.";
//		for (int i = 0; i < -num - 1; i++) {
//			cout << '0';
//		}
//		for (int i = 0; i < originalNum.size(); i++) {
//			if (originalNum[i] != '.') {
//				cout << originalNum[i];
//			}
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	if (s[0] == '-') {
		cout << '-';
	}
	string num = "";
	int index = 1;
	while (s[index] != 'E') {
		num += s[index++];
	}
	int n = atoi(s.substr(++index).c_str());
	if (n > 0) {
		int i, len;
		for (i = 0, len = 0; i < num.size() && len < n + 2; i++, len++) {
			if (num[i] != '.') {
				cout << num[i];
			}
		}
		if (i < num.size()) {
			cout << '.';
			for (; i < num.size(); i++) {
				cout << num[i];
			}
		}
		if (len < n + 2) {
			while (len < n + 2) {
				cout << '0';
				len++;
			}
		}
	}else {
		cout << "0.";
		for (int i = 0; i < -n - 1; i++) {
			cout << '0';
		}
		for (int i = 0; i < num.size(); i++) {
			if (num[i] != '.') {
				cout << num[i];
			}
		}
	}
	return 0;
}