//#include<iostream>
//using namespace std;
//int main() {
//	//freopen("D:\\Ëã·¨±Ê¼Ç\\ÀýÌâ\\PAT\\input.txt", "r", stdin);
//	int N;
//	cin >> N;
//	int aVoice, aHands;
//	int bVoice, bHands;
//	int aCnt = 0, bCnt = 0;
//	for (int i = 0; i < N; i++) {
//		cin >> aVoice >> aHands >> bVoice >> bHands;
//		if(aHands == aVoice + bVoice && bHands == aVoice + bVoice){
//			continue;
//		}else if (aHands == aVoice + bVoice) {
//			bCnt++;
//		}else if (bHands == aVoice + bVoice) {
//			aCnt++;
//		}
//	}
//	cout << aCnt << ' ' << bCnt << endl;
//	return 0;
//}
#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int jL = 0, yL = 0;
	for (int i = 0; i < N; i++) {
		int jM, jH, yM, yH;
		cin >> jM >> jH >> yM >> yH;
		if (jH == jM + yM && yH == jM + yM) {
			continue;
		}else if (jH == jM + yM) {
			yL++;
		}else if (yH == jM + yM) {
			jL++;
		}
	}
	cout << jL << ' ' << yL << endl;
	return 0;
}