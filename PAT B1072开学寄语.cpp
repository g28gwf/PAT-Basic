//#include<iostream>
//#include<vector>
//#include<map>
//#include<string>
//using namespace std;
//vector<vector<int> > item;
//vector<string> stu;
//map<int, bool> m;
//int main() {
//	//freopen("D:\\Ëã·¨±Ê¼Ç\\ÀýÌâ\\PAT\\input.txt", "r", stdin);
//	int N, M;
//	cin >> N >> M;
//	for (int i = 0; i < M; i++) {
//		int temp;
//		cin >> temp;
//		m[temp] = true;
//	}
//	getchar();
//	int sum = 0;
//	for (int i = 0; i < N; i++) {
//		string name;
//		int num;
//		bool isValid = true;
//		vector<int> t;
//		cin >> name >> num;
//		for (int j = 0; j < num; j++) {
//			int temp;
//			cin >> temp;
//			if (m[temp] == true) {
//				isValid = false;
//				t.push_back(temp);
//				sum++;
//			}
//		}
//		if (isValid == false) {
//			stu.push_back(name);
//			item.push_back(t);
//		}
//	}
//	for (int i = 0; i < item.size(); i++) {
//		cout << stu[i] << ": ";
//		for (int j = 0; j < item[i].size(); j++) {
//			if (j != item[i].size() - 1) {
//				printf("%04d ", item[i][j]);
//			}else {
//				printf("%04d\n", item[i][j]);
//			}
//		}
//	}
//	cout << stu.size() << " " << sum << endl;
//	return 0;
//}
#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
int main() {
	map<string, bool> m;
	int N, M;
	cin >> N >> M;
	getchar();
	for (int i = 0; i < M; i++) {
		string s;
		cin >> s;
		m[s] = true;
	}

	int stuNum = 0, itemNum = 0;
	for (int i = 0; i < N; i++) {
		vector<string> v;
		string name;
		int num;
		cin >> name >> num;
		for (int j = 0; j < num; j++) {
			string time;
			cin >> time;
			if (m[time] == true) {
				v.push_back(time);
				itemNum++;
			}
		}
		if (v.size() != 0) {
			stuNum++;
			cout << name << ": ";
			for (int j = 0; j < v.size(); j++) {
				if (j != v.size() - 1) {
					cout << v[j] << " ";
				}else {
					cout << v[j] << endl;
				}
			}
		}
	}
	cout << stuNum << ' ' << itemNum << endl;
	return 0;
}