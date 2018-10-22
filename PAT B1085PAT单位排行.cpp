//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<string>
//using namespace std;
//struct Sch {
//	string name;
//	int score;
//	int stuNum;
//};
//vector<Sch> v;
//map<string, double> score;
//map<string, int> stuNum;
//bool cmp(Sch a, Sch b) {
//	if (a.score != b.score) {
//		return a.score > b.score;
//	}else if (a.stuNum != b.stuNum) {
//		return a.stuNum < b.stuNum;
//	}else {
//		return a.name < b.name;
//	}
//}
//int main() {
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		string name, ID;
//		double grade;
//		cin >> ID >> grade >> name;
//		for (int j = 0; j < name.size(); j++) {
//			if (name[j] >= 'A' && name[j] <= 'Z') {
//				name[j] += 32;
//			}
//		}
//		if (ID[0] == 'T') {
//			grade *= 1.5;
//		}else if (ID[0] == 'B') {
//			grade /= 1.5;
//		}
//		score[name] += grade;
//		stuNum[name]++;
//	}
//	for (auto it = stuNum.begin(); it != stuNum.end(); it++) {
//		v.push_back(Sch{ (*it).first, (int)(score[(*it).first]), (*it).second });
//	}
//	sort(v.begin(), v.end(), cmp);
//	int rank = 1;
//	cout << v.size() << endl;
//	cout << rank << ' ' << v[0].name << ' ' << v[0].score << ' ' << v[0].stuNum << endl;
//	for (int i = 1; i < v.size(); i++) {
//		if (v[i].score < v[i - 1].score) {
//			rank = i + 1;
//		}
//		cout << rank << ' ' << v[i].name << ' ' << v[i].score << ' ' << v[i].stuNum << endl;
//	}
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
using namespace std;
struct Sch {
	string name;
	int totalScore;
	int num;
};
bool cmp(Sch a, Sch b) {
	if (a.totalScore != b.totalScore) {
		return a.totalScore > b.totalScore;
	}else if (a.num != b.num) {
		return a.num < b.num;
	}else {
		return a.name < b.name;
	}
}
int main() {
	map<string, double> totalScore;
	map<string, int> num;
	map<char, double> weight;
	weight['T'] = 1.5;
	weight['A'] = 1;
	weight['B'] = 1 / 1.5;
	int N;
	cin >> N;
	getchar();
	for (int i = 0; i < N; i++) {
		string ID, name;
		int score;
		cin >> ID >> score >> name;
		for (int i = 0; i < name.size(); i++) {
			if (name[i] >= 'A' && name[i] <= 'Z') {
				name[i] += 32;
			}
		}
		num[name]++;
		totalScore[name] += 1.0 * score * weight[ID[0]];
	}
	vector<Sch> v;
	for (auto it = num.begin(); it != num.end(); it++) {
		v.push_back(Sch{ it->first, (int)totalScore[it->first], it->second });
	}
	int rank = 0;
	sort(v.begin(), v.end(), cmp);
	cout << v.size() << endl;
	int score = -1;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].totalScore != score) {
			rank = i + 1;
			score = v[i].totalScore;
		}
		cout << rank << ' ' << v[i].name << ' ' << v[i].totalScore << ' ' << v[i].num << endl;
	}
	return 0;
}