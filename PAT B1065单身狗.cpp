//#include<iostream>
//#include<set>
//#include<map>
//using namespace std;
//map<int, int> couple;
//map<int, bool> isArrival;
//set<int> single;
//int main() {
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int temp1, temp2;
//		cin >> temp1 >> temp2;
//		couple[temp1] = temp2;
//		couple[temp2] = temp1;
//	}
//	int M;
//	cin >> M;
//	for (int i = 0; i < M; i++) {
//		int temp;
//		cin >> temp;
//		isArrival[temp] = true;
//	}
//	for (map<int, bool>::iterator it = isArrival.begin(); it != isArrival.end(); it++) {
//		if (isArrival[couple[(*it).first]] == false) {
//			single.insert((*it).first);
//		}
//	}
//	cout << single.size() << endl;
//	bool isFirst = true;
//	for (set<int>::iterator it = single.begin(); it != single.end(); it++) {
//		if (isFirst == true) {
//			printf("%05d", (*it));
//			isFirst = false;
//		}else {
//			printf(" %05d", (*it));
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main() {
	int N;
	cin >> N;
	map<int, int> m;
	for (int i = 0; i < N; i++) {
		int ID1, ID2;
		cin >> ID1 >> ID2;
		m[ID1] = ID2;
		m[ID2] = ID1;
	}
	int M;
	cin >> M;
	vector<int> v;
	map<int, bool> isExist;
	for (int i = 0; i < M; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
		isExist[temp] = true;
	}
	set<int> single;
	for (int i = 0; i < M; i++) {
		if (isExist[m[v[i]]] == false) {
			single.insert(v[i]);
		}
	}
	cout << single.size() << endl;
	for (auto it = single.begin(); it != single.end(); it++) {
		if (it != (--single.end())) {
			printf("%05d ", *it);
		}else {
			printf("%05d\n", *it);
		}
	}
	return 0;
}