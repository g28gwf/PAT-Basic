//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//map<string, bool> m;
//int main() {
//	//freopen("D:\\Ëã·¨±Ê¼Ç\\ÀýÌâ\\PAT\\input.txt", "r", stdin);
//	int M, N, S;
//	cin >> M >> N >> S;
//		if (S > M) {
//			cout << "Keep going..." << endl;
//		}else {
//			for (int i = 1; i <= M; i++) {
//				string temp;
//				cin >> temp;
//				if (i < S) {
//					continue;
//				}
//				if (i == S && m[temp] == 0) {
//					cout << temp << endl;
//					S += N;
//					m[temp]++;
//				}else if (i == S && m[temp] == 1) {
//					S += 1;
//				}
//			}
//		}
//	return 0;
//}
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main() {
	int M, N, S;
	cin >> M >> N >> S;
	map<string, bool> m;
	S--;
	getchar();
	for (int i = 0; i < M; i++) {
		string s;
		cin >> s;
		if (i == S && m[s] == false) {
			S += N;
			cout << s << endl;
			m[s] = true;
		}else if(i == S && m[s] == true){
			S++;
		}
	}
	if (m.size() == 0) {
		cout << "Keep going..." << endl;
	}
	return 0;
}