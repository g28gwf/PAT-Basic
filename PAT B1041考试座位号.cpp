//#include<iostream>
//#include<string>
//#define MAXN 1001
//using namespace std;
//struct Student {
//	string ID;
//	int seat;
//}student[MAXN];
//int main() {
//	//freopen("D:\\Ëã·¨±Ê¼Ç\\ÀýÌâ\\PAT\\input.txt", "r", stdin);
//	int N, M;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		string ID;
//		int preSeat, seat;
//		cin >> ID >> preSeat >> seat;
//		student[preSeat].ID = ID;
//		student[preSeat].seat = seat;
//	}
//	cin >> M;
//	for (int i = 0; i < M; i++) {
//		int preSeat;
//		cin >> preSeat;
//		cout << student[preSeat].ID << " " << student[preSeat].seat << endl;
//	}
//	return 0;
//}
#include<iostream>
#include<map>
#include<string>
using namespace std;
struct Person {
	string ID;
	int seat;
};
int main() {
	int N;
	cin >> N;
	getchar();
	map<int, Person> m;
	for (int i = 0; i < N; i++) {
		string ID;
		int test, seat;
		cin >> ID >> test >> seat;
		m[test] = Person{ID, seat};
	}
	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int test;
		cin >> test;
		cout << m[test].ID << ' ' << m[test].seat << endl;
	}
	return 0;
}