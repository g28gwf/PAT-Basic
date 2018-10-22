//#include<iostream>
//#include<cstring>
//#define MAX 10000
//using namespace std;
//void trans(long num)
//{
//	int temp[MAX] = {0};
//	int cnt = 0;
//	for(int i = 0; num != 0; i++){
//		temp[i] = num % 10;
//		num /= 10;
//		cnt++;
//	}
//	for(int i = cnt - 1; i >= 0; i--){
//		char ch = (i == 0) ? '\n' : ' ';
//		switch(temp[i]){
//			case 0:
//				cout << "ling" << ch;
//				break;
//			case 1:
//				cout << "yi" << ch;
//				break;
//			case 2:
//				cout << "er" << ch;
//				break;
//			case 3:
//				cout << "san" << ch;
//				break;
//			case 4:
//				cout << "si" << ch;
//				break;
//			case 5:
//				cout << "wu" << ch;
//				break;
//			case 6:
//				cout << "liu" << ch;
//				break;
//			case 7:
//				cout << "qi" << ch;
//				break;
//			case 8:
//				cout << "ba" << ch;
//				break;				
//			case 9:
//				cout << "jiu" << ch;
//				break;		
//	}
//}
//}
//long getNum(char *s)
//{
//	long sum = 0;
//	for(int i = 0; i < strlen(s); i++)
//		sum += s[i] - '0';
//	return sum;
//}
//int main()
//{
//	char n[MAX];
//	cin >> n;
//	trans(getNum(n));
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main() {
	string s[10] = { "ling", "yi", "er", "san", "si", "wu",
		"liu", "qi", "ba", "jiu" };
	string n;
	getline(cin, n);
	int sum = 0;
	for (int i = 0; i < n.size(); i++) {
		sum += n[i] - '0';
	}
	vector<string> v;
	while (sum != 0) {
		v.push_back(s[sum % 10]);
		sum /= 10;
	}
	reverse(v.begin(), v.end());
	for (auto it = v.begin(); it != v.end(); it++) {
		if (it != --(v.end())) {
			cout << *it << ' ';
		}else {
			cout << *it << endl;
		}
	}
	return 0;
}