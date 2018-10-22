//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int main() {
//	int N, M;
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		int G2;
//		cin >> G2;
//		vector<double> g1;
//		for (int j = 0; j < N - 1; j++) {
//			double temp;
//			cin >> temp;
//			if (temp >= 0 && temp <= M) {
//				g1.push_back(temp);
//			}
//		}
//		sort(g1.begin(), g1.end());
//		double G1 = 0;
//		for (int j = 1; j < g1.size() - 1; j++) {
//			G1 += g1[j] / (g1.size() - 2);
//		}
//		int G = ((G1 + G2) / 2 + 0.5);
//		cout << G << endl;
//	}
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		double G2;
		cin >> G2;
		vector<double> g1;
		for (int i = 0; i < N - 1; i++) {
			double temp;
			cin >> temp;
			if (temp >= 0 && temp <= M) {
				g1.push_back(temp);
			}
		}
		sort(g1.begin(), g1.end());
		double G1 = 0;
		for (int i = 1; i < g1.size() - 1; i++) {
			G1 += g1[i] / (g1.size() - 2);
		}
		int G = (G1 + G2) / 2 + 0.5;
		cout << G << endl;
	}
	return 0;
}