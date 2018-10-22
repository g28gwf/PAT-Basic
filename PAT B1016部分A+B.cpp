//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	long long a, b, da, db;
//	long long pa = 0, pb = 0;
//	cin >> a >> da >> b >> db;
//	while(a != 0){
//		if(a % 10 == da){
//			pa = pa * 10 + a % 10;
//		}
//		a /= 10;
//	}
//	while(b != 0){
//		if(b % 10 == db){
//			pb = pb * 10 + b % 10;
//		}
//		b /= 10;
//	}
//	cout << pa + pb << endl;
//	return 0;
//}
//
#include<iostream>
#include<string>
using namespace std;
int main() {
	string A, B;
	int DA, DB;
	cin >> A >> DA >> B >> DB;
	int PA = 0, PB = 0;
	int cntA = 0, cntB = 0;
	for (int i = 0; i < A.size(); i++) {
		if (A[i] - '0' == DA) {
			cntA++;
		}
	}
	for (int i = 0; i < B.size(); i++) {
		if (B[i] - '0' == DB) {
			cntB++;
		}
	}
	while (cntA != 0) {
		PA = PA * 10 + DA;
		cntA--;
	}
	while (cntB != 0) {
		PB = PB * 10 + DB;
		cntB--;
	}
	cout << PA + PB << endl;
	return 0;
}