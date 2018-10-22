//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<string>
//using namespace std;
//struct Stu {
//	string name;
//	int Gp;
//	int Gm;
//	int Gf;
//	int G;
//	Stu(){
//		Gp = -1;
//		Gm = -1;
//		Gf = -1;
//	}
//};
//vector<Stu> v;
//map<string, Stu> m;
//bool cmp(Stu a, Stu b) {
//	if (a.G != b.G) {
//		return (a.G) > (b.G);
//	}else {
//		return a.name < b.name;
//	}
//}
//int main() {
//	int P, M, N;
//	cin >> P >> M >> N;
//	for (int i = 0; i < P; i++) {
//		string name;
//		cin >> name;
//		cin >> m[name].Gp;
//		m[name].name = name;
//	}
//	for (int i = 0; i < M; i++) {
//		string name;
//		cin >> name;
//		cin >> m[name].Gm;
//	}
//	for (int i = 0; i < N; i++) {
//		string name;
//		cin >> name;
//		cin >> m[name].Gf;
//	}
//	for (map<string, Stu>::iterator it = m.begin(); it != m.end(); it++) {
//		(*it).second.G = (*it).second.Gm > (*it).second.Gf ? 
//			(*it).second.Gm * 0.4 + (*it).second.Gf * 0.6 + 0.5: (*it).second.Gf;
//		if (((*it).second.G >= 60) && (*it).second.Gp >= 200) {
//			v.push_back((*it).second);
//		}
//	}
//	sort(v.begin(), v.end(), cmp);
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i].name << ' ' << (v[i].Gp) << ' '
//			<< (v[i].Gm) << ' ' << (v[i].Gf) << ' '
//			<< (v[i].G) << endl;
//	}
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
using namespace std;
struct Stu {
	string ID;
	int Gp;
	int Gm;
	int Gf;
	int G;
	
	Stu() {
		Gp = -1;
		Gm = -1;
		Gf = -1;
	}
};
bool cmp(Stu a, Stu b) {
	if (a.G != b.G) {
		return a.G > b.G;
	}else if (a.ID != b.ID) {
		return a.ID < b.ID;
	}
}
int main() {
	vector<Stu> v;
	map<string, Stu> m;
	int P, M, N;
	cin >> P >> M >> N;
	getchar();
	for (int i = 0; i < P; i++) {
		string ID;
		int score;
		cin >> ID >> score;
		m[ID].Gp = score;
		m[ID].ID = ID;
	}
	for (int i = 0; i < M; i++) {
		string ID;
		int score;
		cin >> ID >> score;
		m[ID].Gm = score;
		m[ID].ID = ID;
	}
	for (int i = 0; i < N; i++) {
		string ID;
		int score;
		cin >> ID >> score;
		m[ID].Gf = score;
		m[ID].ID = ID;
		m[ID].G = m[ID].Gm > m[ID].Gf ? (0.4 * m[ID].Gm + 0.6 * m[ID].Gf) + 0.5 : m[ID].Gf;
		if (m[ID].Gp >= 200 && m[ID].G >= 60) {
			v.push_back(m[ID]);
		}
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].ID << ' ' << v[i].Gp << ' ' << v[i].Gm << ' ' << v[i].Gf << ' ' << v[i].G << endl;
	}
	return 0;
} 