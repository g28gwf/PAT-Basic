//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//struct Player {
//	string ID;
//	double position;
//};
//vector<Player> v;
//bool cmp(Player a, Player b) {
//	return a.position < b.position;
//}
//int main() {
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		double x, y;
//		string name;
//		cin >> name >> x >> y;
//		Player player{name, x * x + y * y};
//		v.push_back(player);
//	}
//	sort(v.begin(), v.end(), cmp);
//	cout << v[0].ID << ' ' << v[v.size() - 1].ID << endl;
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
struct Player {
	string ID;
	double score;
};
bool cmp(Player a, Player b) {
	return a.score > b.score;
}
int main() {
	int N;
	cin >> N;
	getchar();
	vector<Player> v;
	for (int i = 0; i < N; i++) {
		string ID;
		double x, y;
		cin >> ID >> x >> y;
		v.push_back(Player{ ID, x * x + y * y });
	}
	sort(v.begin(), v.end(), cmp);
	cout << v[N - 1].ID << ' ' << v[0].ID << endl;
 	return 0;
}