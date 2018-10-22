//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//struct Cake {
//	double amount;
//	double totalPrice;
//	double singlePrice;
//};
//bool cmp(Cake a, Cake b) {
//	return a.singlePrice > b.singlePrice;
//}
//int main() {
//	int N;
//	double D;
//	cin >> N >> D;
//	vector<Cake> v(N);
//	double ans = 0;
//	for (int i = 0; i < N; i++) {
//		cin >> v[i].amount;
//	}
//	for (int i = 0; i < N; i++) {
//		cin >> v[i].totalPrice;
//		v[i].singlePrice = 1.0 * v[i].totalPrice / v[i].amount;
//	}
//	sort(v.begin(), v.end(), cmp);
//	for (auto it = v.begin(); it != v.end(); it++) {
//		if (it->amount < D) {
//			ans += it->totalPrice;
//			D -= it->amount;
//		}else {
//			ans += it->singlePrice * D;
//			break;
//		}
//	}
//	printf("%.2lf\n", ans);
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct Cake {
	double amount;
	double totalPrice;
	double price;
};
bool cmp(Cake a, Cake b) {
	return a.price > b.price;
}
int main() {
	int N, D;
	cin >> N >> D;
	vector<Cake> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].amount;
	}
	for (int i = 0; i < N; i++) {
		cin >> v[i].totalPrice;
		v[i].price = 1.0 * v[i].totalPrice / v[i].amount;
	}
	sort(v.begin(), v.end(), cmp);
	double ans = 0;
	for (int i = 0; i < N; i++) {
		if (D > v[i].amount) {
			D -= v[i].amount;
			ans += v[i].totalPrice;
		}else {
			ans += v[i].price * D;
			break;
		}
	}
	printf("%.2lf\n", ans);
	return 0;
}