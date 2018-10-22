//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int main() {
//	//freopen("D:\\À„∑®± º«\\¿˝Ã‚\\PAT\\input.txt", "r", stdin);
//	string s;
//	vector<string> v[3];
//	for (int i = 0; i < 3; i++) {
//		getline(cin, s);
//		for (int j = 1; j < s.size() - 1; j++) {
//			string temp = "";
//			if (s[j - 1] == '[') {
//				int index = j;
//				while (s[index] != ']') {
//					temp += s[index];
//					index++;
//				}
//				v[i].push_back(temp);
//			}
//		}
//	}
//	int K;
//	cin >> K;
//	for (int i = 0; i < K; i++) {
//		int H1, E1, M, E2, H2;
//		cin >> H1 >> E1 >> M >> E2 >> H2;
//		H1--;
//		E1--;
//		M--;
//		E2--;
//		H2--;
//		if (H1 > v[0].size() - 1 || E1 > v[1].size() - 1 || M > v[2].size() - 1 
//			|| E2 > v[1].size() - 1 || H2 > v[0].size() - 1) {
//			cout << "Are you kidding me? @\\/@" << endl;
//		}else {
//			cout << v[0][H1] << '(' << v[1][E1] << v[2][M] << v[1][E2] << ')' << v[0][H2] << endl;
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	vector<string> v[3];
	string s;
	for (int i = 0; i < 3; i++) {
		getline(cin, s);
		int index;
		string temp;
		for (index = 0; index < s.size(); index++) {
			if (s[index] == '[') {
				temp = "";
				index++;
				while (s[index] != ']') {
					temp += s[index];
					index++;
				}
				v[i].push_back(temp);
				temp = "";
			}
		}
	}
	int K;
	cin >> K;
	for (int i = 0; i < K; i++) {
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		a--;
		b--;
		c--;
		d--;
		e--;
		if (a >= v[0].size() || b >= v[1].size() || c >= v[2].size() ||
			d >= v[1].size() || e >= v[0].size()) {
			cout << "Are you kidding me? @\\/@" << endl;
			continue;
		}else {
			cout << v[0][a] << "(" << v[1][b] << v[2][c] << v[1][d] << ")" << v[0][e] << endl;
		}
	}
	return 0;
}