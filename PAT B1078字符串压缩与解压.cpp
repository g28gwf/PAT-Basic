//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	//freopen("D:\\Ëã·¨±Ê¼Ç\\ÀýÌâ\\PAT\\input.txt", "r", stdin);
//	char c;
//	cin >> c;
//	getchar();
//	string s;
//	string ans;
//	getline(cin, s);
//	if (c == 'C') {
//		bool flag = false;
//		char temp = s[0];
//		int len = 1;
//		for (int i = 1; i <= s.size(); i++) {
//			if (s[i] != temp) {
//				if (len != 1) {
//					cout << len;
//				}
//				cout << temp;
//				temp = s[i];
//				len = 1;
//			}else {
//				len++;
//			}
//		}
//	}else if (c == 'D') {
//		int sum = 0;
//		for (int i = 0; i < s.size(); i++) {
//			if (s[i] >= '0' && s[i] <= '9') {
//				sum = sum * 10 + s[i] - '0';
//			}else {
//				if (sum == 0) {
//					cout << s[i];
//				}
//				else {
//					for (int j = 0; j < sum; j++) {
//						cout << s[i];
//					}
//				}
//				sum = 0;
//			}
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
int main() {
	char C;
	cin >> C;
	getchar();
	string s;
	getline(cin, s);
	if (C == 'C') {
		char c = s[0];
		int size = 1;
		for (int i = 1; i < s.size(); i++) {
			if (s[i] != c) {
				if (size != 1) {
					cout << size;
				}
				cout << c;
				//for (int j = 0; j < size; j++) {
				//	cout << c;
				//}
				c = s[i];
				size = 1;
			}else {
				size++;
			}
		}
		if (size != 1) {
			cout << size;
		}
		cout << c;
	}else if (C == 'D') {
		int size = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				size = size * 10 + s[i] - '0';
			}else {
				if (size == 0) {
					cout << s[i];
				}else {
					for (int j = 0; j < size; j++) {
						cout << s[i];
					}
					size = 0;
				}
			}
		}
	}
	return 0;
}