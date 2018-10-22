//#include<iostream>
//#include<map>
//using namespace std;
//map<int, bool> m;
//int main() {
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int temp;
//		cin >> temp;
//		int sum = 0;
//		while (temp != 0) {
//			sum += temp % 10;
//			temp /= 10;
//		}
//		if (m[sum] == false) {
//			m[sum] = true;
//		}
//	}
//	cout << m.size() << endl;
//	for (map<int, bool>::iterator it = m.begin(); it != m.end(); it++) {
//		if (it == m.begin()) {
//			cout << (*it).first;
//		}else {
//			cout << ' ' << (*it).first;
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<set>
using namespace std;
int main() {
	int N;
	cin >> N;
	set<int> s;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		int ans = 0;
		while (temp != 0) {
			ans += temp % 10;
			temp /= 10;
		}
		s.insert(ans);
	}
	cout << s.size() << endl;
	for (auto it = s.begin(); it != s.end(); it++) {
		if (it != (--s.end())) {
			cout << *it << ' ';
		}else {
			cout << *it << endl;
		}
	}
	return 0;
}