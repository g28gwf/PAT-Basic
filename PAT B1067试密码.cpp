//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string passwd;
//	int times;
//	cin >> passwd >> times;
//	getchar();
//	string temp;
//	int num = 0;
//	while (num <= times) {
//		getline(cin, temp);
//		if (temp.compare("#") == 0) {
//			break;
//		}
//		num++;
//		if (temp.compare(passwd) == 0) {
//			cout << "Welcome in" << endl;
//			break;
//		}else {
//			cout << "Wrong password: " << temp << endl;
//			if (num == times) {
//				cout << "Account locked" << endl;
//				break;
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
	int N;
	cin >> s >> N;
	getchar();
	bool hasValid = false;
	for (int i = 0; i < N; i++) {
		string temp;
		getline(cin, temp);
		if (temp == "#") {
			break;
		}
		if (temp != s) {
			cout << "Wrong password: " << temp << endl;
			if (i == N - 1) {
				cout << "Account locked" << endl;
			}
		}else {
			hasValid = true;
			cout << "Welcome in" << endl;
			break;
		}
	}
	return 0;
}