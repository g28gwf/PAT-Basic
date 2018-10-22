//#include<iostream>
//#include<cstring>
//#include<algorithm>
//#define MAX 101
//using namespace std;
//int ans[MAX] = {0};
//int num[MAX] = {0};
//int k[MAX] = {0};
//int cnt = 0;
//bool camp(int a, int b)
//{
//	return a > b;
//}
//void Callatz(int n)
//{
//	cnt = 0;
//	memset(num, 0, sizeof(num));
//	num[cnt++] = n;
//	while(n != 1){
//		if(n % 2 == 0){
//			n /= 2;
//			num[cnt++] = n;
//		}
//		else{
//			n = (3 * n + 1) / 2;
//			num[cnt++] = n;
//		}		
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int m;
//	int len = 0;
//	for(int i = 0; i < n; i++){
//		cin >> k[i];
//	}
//	for(int i = 0; i < n; i++){
//		int flag = 0;
//		for(int j = 0; j < n; j++){
//			Callatz(k[j]);
//			for(int l = 1; l < cnt; l++){
//				if(k[i] == num[l]){
//					flag = 1;
//					break;
//				}
//			}
//		}
//	if(flag == 0)
//		ans[len++] = k[i];
//	}
//	sort(ans, ans + len, camp);
//	for(int i = 0; i < len; i++){
//		if(i != len - 1){
//			cout << ans[i] << ' ';
//		}else{
//			cout << ans[i] << endl;
//		}
//	}
//	return 0;
//} 
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	int N;
	cin >> N;
	vector<int> v(N);
	map<int, int> m;
	for (int i = 0; i < N; i++) {
		cin >> v[i];
		int temp = v[i];
		while (temp != 1) {
			if (temp % 2 == 0) {
				temp /= 2;
				m[temp]++;
			}else {
				temp = (temp * 3 + 1) / 2;
				m[temp]++;
			}
		}
	}
	vector<int> ans;
	for (int i = 0; i < N; i++) {
		if (m[v[i]] == 0) {
			ans.push_back(v[i]);
		}
	}
	sort(ans.begin(), ans.end(), cmp);
	for (int i = 0; i < ans.size(); i++) {
		if (i != ans.size() - 1) {
			cout << ans[i] << ' ';
		}else {
			cout << ans[i] << endl;
		}
	}
	return 0;
}