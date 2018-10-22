//#include<iostream>
//using namespace std;
//int main() {
//	//freopen("D:\\Ëã·¨±Ê¼Ç\\ÀýÌâ\\PAT\\input.txt", "r", stdin);
//	int N;
//	double e;
//	int D;
//	cin >> N >> e >> D;
//	int posEmpty = 0;
//	int empty = 0;
//	for (int i = 0; i < N; i++) {
//		int K;
//		int days = 0;
//		cin >> K;
//		for (int j = 0; j < K; j++) {
//			double temp;
//			cin >> temp;
//			if (temp < e) {
//				days++;
//			}
//		}
//		if (K > D && days > K / 2) {
//			empty++;
//		} else if(days > K / 2){
//			posEmpty++;
//		}
//	}
//	printf("%.1lf", 100 * (double)posEmpty / N);
//	cout << "% ";
//	printf("%.1lf", 100 * (double)empty / N);
//	cout << "%" << endl;
//	return 0;
//}
#include<iostream>
#include<vector>
using namespace std;
int main() {
	int N, D;
	double e;
	cin >> N >> e >> D;
	int numOfEmpty = 0;
	int numOfMaybeEmpty = 0;
	for (int i = 0; i < N; i++) {
		int K;
		cin >> K;
		int underE = 0;
		bool maybeEmpty = false;
		bool isEmpty = false;
		vector<double> E(K);
		for (int j = 0; j < K; j++) {
			cin >> E[j];
			if (E[j] < e) {
				underE++;
			}
		}
		if (underE > K / 2) {
			maybeEmpty = true;
			numOfMaybeEmpty++;
		}
		if (maybeEmpty == true && K > D) {
			isEmpty = true;
			numOfEmpty++;
			numOfMaybeEmpty--;
		}
	}
	printf("%.1lf", (1.0 * numOfMaybeEmpty / N) * 100);
	cout << "% ";
	printf("%.1lf", (1.0 * numOfEmpty / N) * 100);
	cout << "\%\n";
	return 0;
}