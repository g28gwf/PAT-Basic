//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//vector<int> v;
//int main() {
//	string s;
//	int sum = 0;
//	getline(cin, s);
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] >= 'A' && s[i] <= 'Z') {
//			sum += s[i] - 64;
//		}
//		if (s[i] >= 'a' && s[i] <= 'z') {
//			sum += s[i] - 96;
//		}
//	}
//	while (sum != 0) {
//		v.push_back(sum % 2);
//		sum /= 2;
//	}
//	int numOfZero = 0, numOfOne = 0;
//	for (int i = 0; i < v.size(); i++) {
//		if (v[i] == 0) {
//			numOfZero++;
//		}else {
//			numOfOne++;
//		}
//	}
//	cout << numOfZero << ' ' << numOfOne << endl;
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int sum = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z') {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				sum += s[i] - 'A' + 1;
			}else {
				sum += s[i] - 'a' + 1;
			}
		}
	}
	int num0 = 0, num1 = 0;
	while (sum != 0) {
		int temp = sum % 2;
		if (temp == 0) {
			num0++;
		}else {
			num1++;
		}
		sum /= 2;
	}
	cout << num0 << ' ' << num1 << endl;
	return 0;
}