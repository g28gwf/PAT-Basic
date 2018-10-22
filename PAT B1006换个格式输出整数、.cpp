//#include<iostream>
//#include<cstring>
//using namespace std;
//int num[3] = {0};
//int main()
//{
//	int n;
//	cin >> n;
//	int cnt = 0;
//	while(n != 0){
//		num[cnt++] = n % 10;
//		n /= 10;
//	}
//	for(int i = 2; i >= 0; i--){
//		for(int j = 0; j < num[i]; j++){
//			switch(i){
//				case 2:
//					cout << 'B';
//					break;
//				case 1:
//					cout << 'S';
//					break;
//				case 0:
//					cout << j + 1;
//					break;
//			}
//		}			
//	}
//	cout << endl;
//	return 0;
//} 
#include<iostream>
#include<string>
using namespace std;
string B(int n) {
	string s = "";
	while (n != 0) {
		s += 'B';
		n--;
	}
	return s;
}
string S(int n) {
	string s = "";
	while (n != 0) {
		s += 'S';
		n--;
	}
	return s;
}
string G(int n) {
	string s = "";
	int i = 1;
	while (i != n + 1) {
		s += i + '0';
		i++;
	}
	return s;
}
int main() {
	int n;
	cin >> n;
	string ans = "";
	if (n / 100 != 0) {
		ans += B(n / 100);
	}
	if ((n % 100 - n % 10) / 10 != 0) {
		ans += S((n % 100 - n % 10) / 10);
	}
	ans += G(n % 10);
	cout << ans << endl;
	return 0;
}