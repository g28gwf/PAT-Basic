#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	int P = 0, T = 0;
	int ans = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'T') {
			T++;
		}
	}
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'P') {
			P++;
		}
		if (s[i] == 'T') {
			T--;
		}
		if (s[i] == 'A') {
			ans = (ans + P * T) % 1000000007;
		}
	}
	cout << ans << endl;
	return 0;
}