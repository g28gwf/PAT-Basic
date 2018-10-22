//#include<iostream>
//#include<algorithm>
//#include<string>
//#define MAXN 100005
//using namespace std;
////string name[MAXN];
//struct Person{
//	string name;
//	int birthday;
//}person[MAXN];
//bool camp(Person a, Person b)
//{
//	return a.birthday > b.birthday;
//}
//int main()
//{
//	freopen("input.txt", "r", stdin);
//	int cnt = 0;
//	int n;
//	cin >> n;
//	for(int i = 0; i < n; i++){
//		string tempName;
//		cin >> tempName;
//		int year, month, day;
//		scanf("%d/%d/%d", &year, &month, &day);
//		int daysOfYear = year * 10000 + month * 100 + day;
//		if(!(daysOfYear < 18140906 || daysOfYear > 20140906)){
//			person[cnt].name = tempName;
//			person[cnt++].birthday = daysOfYear;
//		}
//	}
//	sort(person, person + cnt, camp);
//	cout << cnt;
//	if(cnt != 0){
//		cout << ' ' << person[cnt - 1].name << ' ' << person[0].name << endl;
//	} 
//	return 0;
//}
//
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
struct Person {
	string name;
	int life;
};
bool cmp(Person a, Person b) {
	return a.life < b.life;
}
int main() {
	int N;
	cin >> N;
	getchar();
	vector<Person> v(N);
	int index = 0;
	for (int i = 0; i < N; i++) {
		string name;
		int birthday;
		int y, m, d;
		cin >> name;
		scanf("%d/%d/%d", &y, &m, &d);
		birthday = y * 10000 + m * 100 + d;
		if (birthday > 18140905 && birthday <= 20140906) {
			v[index++] = Person{ name, birthday };
		}
	}
	sort(v.begin(), v.begin() + index, cmp);
	if (index != 0) {
		cout <<index << ' ' << v[0].name << ' ' << v[index - 1].name << endl;
	}else {
		cout << '0' << endl;
	}
	return 0;
}