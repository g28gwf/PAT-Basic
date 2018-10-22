//#include<iostream>
//using namespace std;
//int main()
//{
//	long long n;
//	long long cnt = 0;
//	cin >> n;
//	while(n != 1)
//		{
//			if(n % 2 == 0){
//				n /= 2;
////				cout << n << endl;
//			}
//			else{
//				n = (3 * n + 1) / 2;
////				cout << n << endl;
//			}
//			cnt++;
//		}
//	cout << cnt << endl;
//	return 0;
//} 
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int step = 0;
	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
		}else {
			n = (3 * n + 1) / 2;
		}
		step++;
	}
	cout << step << endl;
	return 0;
}