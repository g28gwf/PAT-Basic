//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
//char M[11] = { '1','0','X','9','8', '7', '6', '5', '4', '3', '2' };
//int main() {
//	int N;
//	cin >> N;
//	getchar();
//	bool isValid = true;
//	for (int i = 0; i < N; i++) {
//		string temp;
//		cin >> temp;
//		int z = 0;
//		for (int j = 0; j < temp.size() - 1; j++) {
//			z += (temp[j] - '0') * weight[j];
//		}
//		z %= 11;
//		if (M[z] != temp[17]) {
//			isValid = false;
//			cout << temp << endl;
//		}
//	}
//	if (isValid == true) {
//		cout << "All passed" << endl;
//	}
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
char M[11] = { '1','0','X','9','8', '7', '6', '5', '4', '3', '2' };
int main() {
	int N;
	cin >> N;
	getchar();
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		int sum = 0;
		for (int j = 0; j < s.size() - 1; j++) {
			sum += (s[j] - '0') * weight[j];
		}
		sum %= 11;
		if (M[sum] != s[17]) {
			cout << s << endl;
			cnt++;
		}
	}
	if (cnt == 0) {
		cout << "All passed" << endl;
	}
	return 0;
}