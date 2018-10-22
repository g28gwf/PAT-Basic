//#include<iostream>
//using namespace std;
//int main() {
//	//freopen("D:\\Ëã·¨±Ê¼Ç\\ÀýÌâ\\PAT\\input.txt", "r", stdin);
//	int T, K;
//	cin >> T >> K;
//	for (int i = 0; i < K; i++) {
//		int n1, b, t, n2;
//		cin >> n1 >> b >> t >> n2;
//		if (T < t) {
//			cout << "Not enough tokens.  Total = " << T << "." << endl;
//			continue;
//		}
//		if ((n2 > n1 && b == 1) || (n2 < n1 && b == 0)) {
//			T += t;
//			cout << "Win " << t << "!  Total = " << T << "." << endl;;
//		}
//		if ((n2 < n1 && b == 1) || (n2 > n1 && b == 0)) {
//			T -= t;
//			cout << "Lose " << t << ".  Total = " << T << "." << endl;;
//		}
//		if (T == 0) {
//			cout << "Game Over." << endl;
//			break;
//		}
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main() {
	int T, K;
	cin >> T >> K;
	for (int i = 0; i < K; i++) {
		int n1, b, t, n2;
		cin >> n1 >> b >> t >> n2;
		if (t > T) {
			cout << "Not enough tokens.  Total = " << T << "." << endl;
			continue;
		}
		if (b == 0 && n2 < n1 || b == 1 && n2 > n1) {
			T += t;
			cout << "Win " << t << "!  Total = " << T << "." << endl;
		}else if (b == 1 && n2 < n1 || b == 0 && n2 > n1) {
			T -= t;
			cout << "Lose " << t << ".  Total = " << T << "." << endl;
		}
		if (T == 0) {
			cout << "Game Over." << endl;
			break;
		}
	}
	return 0;
}