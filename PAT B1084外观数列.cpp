//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> v;
//vector<int> vd;
//int main() {
//	int d, N;
//	cin >> d >> N;
//	int times = 0;
//	v.push_back(d);
//	while (times < N - 1) {
//		int cnt = 1;
//		int num = v[0];
//		for (int i = 1; i < v.size(); i++) {
//			if (num == v[i]) {
//				cnt++;
//			}else {
//				vd.push_back(num);
//				vd.push_back(cnt);
//				cnt = 1;
//				num = v[i];
//			}
//		}
//		vd.push_back(num);
//		vd.push_back(cnt);
//		v = vd;
//		vd.clear();
//		times++;
//	}
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i];
//	}
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
int main() {
	char d;
	int N;
	cin >> d >> N;
	string s = "";
	s += d;
	while (--N) {
		string temp = "";
		char t = s[0];
		int cnt = 1;
		for (int i = 1; i < s.size(); i++) {
			if (s[i] == t) {
				cnt++;
			}else {
				temp += t;
				temp += cnt + '0';
				t = s[i];
				cnt = 1;
			}
		}
		temp += t;
		temp += cnt + '0';
		s = temp;
		temp = "";
	}
	cout << s << endl;
	return 0;
}