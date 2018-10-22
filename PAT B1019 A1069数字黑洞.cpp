//#include<iostream>
//#include<algorithm>
//using namespace std;
//bool camp(int a, int b)
//{
//	return a > b;
//}
//int toNumber(int *a)
//{
//	int sum = 0;
//	for(int i = 0; i < 4; i++){
//		sum = sum * 10 + a[i];
//	}
//	return sum;
//}
//void toArray(int *a, int num)
//{
//	int i = 0;
////	while(num != 0){
//	for(int i = 0; i < 4; i++){
////		a[i++] = num % 10;
//		a[i] = num % 10;
//		num /= 10;
//	}
//}
//int main()
//{
//	int num;
//	int m, n;
//	cin >> num;
//	int a[5] = {0};
////	toArray(a, num);
////	sort(a, a + 4, camp);
////	m = toNumber(a);
////	sort(a, a + 4);
////	n = toNumber(a);
////	num = m - n;
//	while(1){
//		toArray(a, num);
//		sort(a, a + 4, camp);
//		m = toNumber(a);
//		sort(a, a + 4);
//		n = toNumber(a);
//		num = m - n;
//		printf("%04d - %04d = %04d\n", m, n, num);
//		if(num == 6174 || num == 0){
//			break;
//		}
//	}
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	int n;
	cin >> n;
	vector<int> N(4);
	for (int i = 0; i < 4; i++) {
		N[i] = n % 10;
		n /= 10;
	}
	reverse(N.begin(), N.end());
	if (N[0] == N[1] && N[0] == N[2] && N[0] == N[3]) {
		cout << N[0] << N[1] << N[2] << N[3];
		cout << " - ";
		cout << N[0] << N[1] << N[2] << N[3];
		cout << " = 0000" << endl;
	}else {
		int A = 0, B = 0;
		while (A - B != 6174) {
			sort(N.begin(), N.end(), cmp);
			A = B = 0;
			for (int i = 0; i < 4; i++) {
				A = A * 10 + N[i];
			}
			sort(N.begin(), N.end());
			for (int i = 0; i < 4; i++) {
				B = B * 10 + N[i];
			}
			printf("%04d - %04d = %04d\n", A, B, A - B);
			N[0] = (A - B) / 1000;
			N[1] = ((A - B) - 1000 * N[0]) / 100;
			N[3] = (A - B) % 10;
			N[2] = ((A - B) % 100 - N[3]) / 10;
		}
	}
	return 0;
}