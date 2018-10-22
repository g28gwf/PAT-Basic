//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	int N;
//	cin >> N;
//	double maxN = -1;
//	for (int i = 0; i < N; i++) {
//		int x, y;
//		cin >> x >> y;
//		double r = sqrt(x * x + y * y);
//		if (maxN < r) {
//			maxN = r;
//		}
//	}
//	printf("%.2lf\n", maxN);
//	return 0;
//}
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int N;
	cin >> N;
	double maxN = -1;
	for (int i = 0; i < N; i++) {
		double a, b;
		cin >> a >> b;
		double r = sqrt(a * a + b * b);
		maxN = maxN > r ? maxN : r;
	}
	printf("%.2lf\n", maxN);
	return 0;
}