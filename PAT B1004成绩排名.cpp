//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct Student{
//	char name[11];
//	char num[11];
//	int grade;
//}stu[100];
//bool camp(Student a, Student b)
//{
//	return a.grade > b.grade;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for(int i = 0; i < n; i++){
//		cin >> stu[i].name >> stu[i].num >> stu[i].grade;
//	}
//	sort(stu, stu + n, camp);
//	cout << stu[0].name << ' ' << stu[0].num << endl;
//	cout << stu[n - 1].name << ' ' << stu[n - 1].num << endl;
//	return 0;
//} 
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
struct Stu {
	string name;
	string ID;
	int point;
};
bool cmp(Stu a, Stu b) {
	return a.point > b.point;
}
int main() {
	int N;
	cin >> N;
	vector<Stu> v(N);
	getchar();
	for (int i = 0; i < N; i++) {
		cin >> v[i].name >> v[i].ID >> v[i].point;
	}
	sort(v.begin(), v.end(), cmp);
	cout << v[0].name << ' ' << v[0].ID << endl;
	cout << v[v.size() - 1].name << ' ' << v[v.size() - 1].ID << endl;
	return 0;
}