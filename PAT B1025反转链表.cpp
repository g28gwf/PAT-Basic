//#include<iostream>
//#include<algorithm>
//#define MAXN 100005
//using namespace std;
//int main()
//{
////	freopen("input.txt", "r", stdin);
//	int address[MAXN] = {0}, data[MAXN] = {0}, next[MAXN] = {0};
//	int n, k;
//	int start;
//	cin >> start >> n >> k;
//	for(int i = 0; i < n; i++){
//		int temp;
//		cin >> temp;
//		cin >> data[temp] >> next[temp];
//	}
//	int cnt = 0;
//	while(start != -1){
//		address[cnt++] = start;
//		start = next[start];
//	}
//	for(int i = 0; i < (cnt - cnt % k); i += k){
//		reverse(address + i, address + i + k);
//	}
//	for(int i = 0; i < cnt - 1; i++){
//		printf("%05d %d %05d\n", address[i], data[address[i]], address[i + 1]);
//	}
//	printf("%05d %d -1\n", address[cnt - 1], data[address[cnt - 1]]);
//	return 0;
//}
#include<iostream>
#include<algorithm>
#define MAXN 100005
using namespace std;
int main() {
	int address[MAXN] = { 0 }, data[MAXN] = { 0 }, next[MAXN] = { 0 };
	int head, N, K;
	cin >> head >> N >> K;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		cin >> data[temp] >> next[temp];
	}
	int cnt = 0;
	while (head != -1) {
		address[cnt++] = head;
		head = next[head];
	}
	for (int i = 0; i < (cnt - cnt % K); i += K) {
		reverse(address + i, address + i + K);
	}
	for (int i = 0; i < cnt - 1; i++) {
		printf("%05d %d %05d\n", address[i], data[address[i]], address[i + 1]);
	}
	printf("%05d %d -1\n", address[cnt - 1], data[address[cnt - 1]]);
	return 0;
}