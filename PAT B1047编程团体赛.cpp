//#include<iostream>
//#include<algorithm>
//#define MAXN 1001
//using namespace std;
//struct T {
//	int ID;
//	int score;
//}num[MAXN];
//bool camp(T a, T b) {
//	return a.score > b.score;
//}
//int main() {
//	//freopen("D:\\Ëã·¨±Ê¼Ç\\ÀýÌâ\\PAT\\input.txt", "r", stdin);
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int teamNum, playerNum;
//		int score;
//		scanf("%d-%d", &teamNum, &playerNum);
//		cin >> score;
//		num[teamNum].ID = teamNum;
//		num[teamNum].score += score;
//	}
//	sort(num, num + MAXN, camp);
//	cout << num[0].ID << ' ' << num[0].score << endl;
//	return 0;
//}
#include<iostream>
#include<map>
using namespace std;
int main() {
	int N;
	cin >> N;
	map<int, int> m;
	for (int i = 0; i < N; i++) {
		int team, person, grade;
		scanf("%d-%d %d", &team, &person, &grade);
		m[team] += grade;
	}
	int maxN = -1;
	int index;
	for (auto it = m.begin(); it != m.end(); it++) {
		if (it->second > maxN) {
			maxN = it->second;
			index = it->first;
		}
	}
	cout << index << ' ' << maxN << endl;
	return 0;
}