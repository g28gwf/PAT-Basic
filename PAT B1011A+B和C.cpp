//#include<iostream>
//#include<string>
//#define MAX 11
//using namespace std;
//struct Node{
//	long long a;
//	long long b;
//	long long c;
//	string res;
//}node[MAX];
//int main()
//{
//	int n;
//	cin >> n;
//	for(int i = 1; i <= n; i++){
//		cin >> node[i].a >> node[i].b >> node[i].c;
//		node[i].res = (node[i].a + node[i].b > node[i].c) ? "true" : "false";
//	}
//	for(int i = 1; i <= n; i++){
//		cout << "Case #" << i << ": " << node[i].res << endl;
//	}
//	return 0;
//}
//
#include<iostream>
using namespace std;
int main() {
	int T;
	cin >> T;
	getchar();
	for (int i = 0; i < T; i++) {
		long long A, B, C;
		cin >> A >> B >> C;
		cout << "Case #" << i + 1 << ": ";
		if (A + B > C) {
			cout << "true" << endl;
		}else {
			cout << "false" << endl;
		}
	}
	return 0;
}