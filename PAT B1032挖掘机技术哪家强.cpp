//#include<iostream>
//#define MAX 100001
//using namespace std;
//int main()
//{
//	int school[MAX + 1] = {0};
//	int n;
//	int cnt;
//	cin >> n;
//	for(int i = 0; i < n; i++){
//			int schoolnum, score;
//			cin >> schoolnum >> score;
//			school[schoolnum] += score;
//		}
//	int max = -1;
//	int maxnum;
//	for(int i = 0; i <= n; i++){
//			if(max < school[i]){
//					max = school[i];
//					maxnum = i;
//				}
//		}
//	cout << maxnum << ' ' << max << endl;
//	return 0;
//}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	vector<int> v(N + 1);
	for (int i = 1; i <= N; i++) {
		int num, score;
		cin >> num >> score;
		v[num] += score;
	}
	int maxN = -1, maxIndex;
	for (int i = 1; i <= N; i++) {
		if (maxN < v[i]) {
			maxN = v[i];
			maxIndex = i;
		}
	}
	cout << maxIndex << ' ' << maxN << endl;
	return 0;
}