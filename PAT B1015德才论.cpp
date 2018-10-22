//#include<iostream>
//#include<cstring>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//struct Stu{
////	string num;
//	char num[20];
//	int de;
//	int cai;
//	int sum;
//};
//vector<Stu> vi, v1, v2, v3, v4;
//bool camp(Stu a, Stu b)
//{
//	if(a.sum != b.sum){
//		return a.sum > b.sum;
//	}else if(a.de != b.de){
//		return a.de > b.de;
//	}else if(a.de == b.de){
//		return strcmp(a.num, b.num) < 0;
//	}
//}
//int main()
//{
////	freopen("input.txt", "r", stdin);
//	int n, l, h;
//	scanf("%d %d %d", &n, &l, &h);
////	cin >> n >> l >> h;
//	for(int i = 0; i < n; i++){
//		Stu stu;
//		scanf("%s %d %d", stu.num, &stu.de, &stu.cai);
////		cin >> stu.num >> stu.de >> stu.cai;
//		stu.sum = stu.de + stu.cai; 
//		vi.push_back(stu);
//	} 
//	for(vector<Stu>::iterator it = vi.begin(); it != vi.end(); it++){
//		if((*it).de >= l && (*it).cai >= l){
//			if((*it).de >= h && (*it).cai >= h){
//				v1.push_back(*it);
//			}else if((*it).cai < h && (*it).de >= h){
//				v2.push_back(*it);
//			}else if((*it).cai < h && (*it).de < h && (*it).de >= (*it).cai){
//				v3.push_back(*it);
//			}else {
//				v4.push_back(*it);
//			}			
//		}
//	}
//	sort(v1.begin(), v1.end(), camp);
//	sort(v2.begin(), v2.end(), camp);
//	sort(v3.begin(), v3.end(), camp);
//	sort(v4.begin(), v4.end(), camp);
//	printf("%d\n", v1.size() + v2.size() + v3.size() + v4.size());
////	cout << v1.size() + v2.size() + v3.size() + v4.size() << endl;
//	for(vector<Stu>::iterator it = v1.begin(); it != v1.end(); it++){
//		printf("%s %d %d\n", (*it).num, (*it).de, (*it).cai);
////		cout << (*it).num << ' ' << (*it).de << ' ' << (*it).cai << endl;
//	}
////		cout << '*' << endl;
//	for(vector<Stu>::iterator it = v2.begin(); it != v2.end(); it++){
//		printf("%s %d %d\n", (*it).num, (*it).de, (*it).cai);
////		cout << (*it).num << ' ' << (*it).de << ' ' << (*it).cai << endl;
//	}
////		cout << '*' << endl;
//	for(vector<Stu>::iterator it = v3.begin(); it != v3.end(); it++){
//		printf("%s %d %d\n", (*it).num, (*it).de, (*it).cai);
////		cout << (*it).num << ' ' << (*it).de << ' ' << (*it).cai << endl;
//	}
////		cout << '*' << endl;
//	for(vector<Stu>::iterator it = v4.begin(); it != v4.end(); it++){
//		printf("%s %d %d\n", (*it).num, (*it).de, (*it).cai);
////		cout << (*it).num << ' ' << (*it).de << ' ' << (*it).cai << endl;
//	}
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
struct Stu {
	int ID;
	int D;
	int C;
};
bool cmp(Stu a, Stu b) {
	if (a.C + a.D != b.C + b.D) {
		return a.C + a.D > b.C + b.D;
	}else {
		if (a.D != b.D) {
			return a.D > b.D;
		}else {
			return a.ID < b.ID;
		}
	}
}
int main() {
	vector<Stu> v[4];
	int N, L, H;
	cin >> N >> L >> H;
	for (int i = 0; i < N; i++) {
		int ID;
		int D, C;
		cin >> ID >> D >> C;
		if (D >= L && C >= L) {
			if (D >= H && C >= H) {
				v[0].push_back(Stu{ ID, D, C });
			}else if (D >= H) {
				v[1].push_back(Stu{ ID, D, C });
			}else if (D <= H && C <= H && D >= C) {
				v[2].push_back(Stu{ ID, D, C });
			}else {
				v[3].push_back(Stu{ ID, D, C });
			}
		}
	}
	sort(v[0].begin(), v[0].end(), cmp);
	sort(v[1].begin(), v[1].end(), cmp);
	sort(v[2].begin(), v[2].end(), cmp);
	sort(v[3].begin(), v[3].end(), cmp);
	cout << v[0].size() + v[1].size() + v[2].size() + v[3].size() << endl;
	for (int i = 0; i < v[0].size(); i++) {
		//cout << v[0][i].ID << ' ' << v[0][i].D << ' ' << v[0][i].C << endl;
		printf("%d %d %d\n", v[0][i].ID, v[0][i].D, v[0][i].C);
	}
	for (int i = 0; i < v[1].size(); i++) {
		//cout << v[1][i].ID << ' ' << v[1][i].D << ' ' << v[1][i].C << endl;
		printf("%d %d %d\n", v[1][i].ID, v[1][i].D, v[1][i].C);
	}
	for (int i = 0; i < v[2].size(); i++) {
		//cout << v[2][i].ID << ' ' << v[2][i].D << ' ' << v[2][i].C << endl;
		printf("%d %d %d\n", v[2][i].ID, v[2][i].D, v[2][i].C);
	}
	for (int i = 0; i < v[3].size(); i++) {
		//cout << v[3][i].ID << ' ' << v[3][i].D << ' ' << v[3][i].C << endl;
		printf("%d %d %d\n", v[3][i].ID, v[3][i].D, v[3][i].C);
	}
	return 0;
}