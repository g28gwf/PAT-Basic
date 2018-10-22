//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	int N;
//	cin >> N;
//	getchar();
//	for (int i = 0; i < N; i++) {
//		string temp;
//		bool hasInvalid = false;
//		bool hasDigital = false;
//		bool hasAlpha = false;
//		getline(cin, temp);
//		if (temp.size() < 6) {
//			cout << "Your password is tai duan le." << endl;
//			continue;
//		}else {
//			for (int j = 0; j < temp.size(); j++) {
//				if ((temp[j] >= 'A' && temp[j] <= 'Z') ||
//					(temp[j] >= 'a' && temp[j] <= 'z')) {
//					hasAlpha = true;
//				}
//				if (temp[j] >= '0' && temp[j] <= '9') {
//					hasDigital = true;
//				}
//				if (!((temp[j] >= 'A' && temp[j] <= 'Z') ||
//					(temp[j] >= 'a' && temp[j] <= 'z') ||
//					(temp[j] >= '0' && temp[j] <= '9') ||
//					temp[j] == '.')) {
//					hasInvalid = true;
//					break;
//				}
//			}
//			if (hasInvalid == true) {
//				cout << "Your password is tai luan le." << endl;
//				continue;
//			}
//			if (hasAlpha == false) {
//				cout << "Your password needs zi mu." << endl;
//				continue;
//			}
//			if (hasDigital == false) {
//				cout << "Your password needs shu zi." << endl;
//				continue;
//			}
//			cout << "Your password is wan mei." << endl;
//		}
//
//	}
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
int main() {
	int N;
	cin >> N;
	getchar();
	for (int i = 0; i < N; i++) {
		string s;
		getline(cin, s);
		if (s.size() < 6) {
			cout << "Your password is tai duan le." << endl;
			continue;
		}else {
			bool hasDigital = false;
			bool hasChar = false;
			bool hasInvalid = false;
			for (int i = 0; i < s.size(); i++) {
				if (s[i] >= '0' && s[i] <= '9') {
					hasDigital = true;
				}else if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z') {
					hasChar = true;
				}else if (s[i] != '.') {
					hasInvalid = true;
					cout << "Your password is tai luan le." << endl;
					break;
				}
			}
			if (hasInvalid == true) {
				continue;
			}
			if (hasDigital == false) {
				cout << "Your password needs shu zi." << endl;
				continue;
			}else if (hasChar == false) {
				cout << "Your password needs zi mu." << endl;
				continue;
			}
			if(hasDigital && hasChar){
				cout << "Your password is wan mei." << endl;
			}
		}
	}
	return 0;
}