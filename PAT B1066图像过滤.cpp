//#include<iostream>
//#define MAXN 501
//using namespace std;
//int arr[MAXN][MAXN] = { 0 };
//int main() {
//	int M, N, A, B, K;
//	cin >> M >> N >> A >> B >> K;
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> arr[i][j];
//			if (arr[i][j] >= A && arr[i][j] <= B) {
//				arr[i][j] = K;
//			}
//		}
//	}
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			if (j != N - 1) {
//				printf("%03d ", arr[i][j]);
//			}else {
//				printf("%03d\n", arr[i][j]);
//			}
//		}
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
#define MAXN 501
int pic[MAXN][MAXN] = { 0 };
int dire[8][2] = { {-1, -1}, {0, -1}, {1, -1}, {-1, 0}, {1, 0}, {-1, 1}, {0, 1}, {1, 1} };
int main() {
	int M, N, A, B, value;
	cin >> M >> N >> A >> B >> value;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> pic[i][j];
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < 8; k++) {
				int ni = i + dire[k][0];
				int nj = j + dire[k][1];
				if (ni >= 0 && ni < M && nj >= 0 && nj < N) {
					if (pic[ni][nj] >= A && pic[ni][nj] <= B) {
						pic[ni][nj] = value;
					}
				}
			}
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (j != N - 1) {
				printf("%03d ", pic[i][j]);
			}else {
				printf("%03d\n", pic[i][j]);
			}
		}
	}
	return 0;
}