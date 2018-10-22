//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//struct Stu {
//	string name;
//	int height;
//};
//bool cmp(Stu a, Stu b) {
//	if (a.height != b.height) {
//		return a.height > b.height;
//	}else if (a.name != b.name) {
//		return a.name < b.name;
//	}
//}
//int main() {
//	int N, K;
//	cin >> N >> K;
//	vector<Stu> v(N);
//	getchar();
//	for (int i = 0; i < N; i++) {
//		cin >> v[i].name >> v[i].height;
//	}
//	sort(v.begin(), v.end(), cmp);
//	int row = K;
//	int index = 0;
//	int numInRow;
//	while (row != 0) {
//		if (row == K) {
//			numInRow = N % K + N / K;
//		}else {
//			numInRow = N / K;
//		}
//		int index1 = index;
//		int index2 = index + 1;
//		vector<Stu> line(numInRow);
//		for (int i = line.size() / 2; i < line.size(); i++, index1 += 2) {
//			line[i] = v[index1];
//		}
//		for (int i = line.size() / 2 - 1; i >= 0; i--, index2 += 2) {
//			line[i] = v[index2];
//		}
//		for (int i = 0; i < line.size(); i++) {
//			if (i != line.size() - 1) {
//				cout << line[i].name << ' ';
//			}else {
//				cout << line[i].name << endl;;
//			}
//		}
//		row--;
//		index += numInRow;
//	}
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
struct Stu {
	string name;
	int height;
};
bool cmp(Stu a, Stu b) {
	if (a.height != b.height) {
		return a.height > b.height;
	}else if (a.name != b.name) {
		return a.name < b.name;
	}
}
int main() {
	int N, K;
	cin >> N >> K;
	getchar();
	vector<Stu> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].name >> v[i].height;
	}
	sort(v.begin(), v.end(), cmp);
	int row = K;
	int index = 0;
	int m;
	while (row != 0) {
		if (row == K) {
			m = N / K + N % K;
		}else {
			m = N / K;
		}
		int index1 = index;
		int index2 = index + 1;
		vector<Stu> line(m);
		for (int i = m / 2; i < line.size(); i++, index1 += 2) {
			line[i] = v[index1];
		}
		for (int i = m / 2 - 1; i >= 0; i--, index2 += 2) {
			line[i] = v[index2];
		}
		for (int i = 0; i < line.size(); i++) {
			if (i != line.size() - 1) {
				cout << line[i].name << ' ';
			}else {
				cout << line[i].name << endl;
			}
		}
		row--;
		index += m;
	}
	return 0;
}