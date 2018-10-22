#include<iostream>
#include<cmath>
#include<map>
#define MAXN 1001
using namespace std;
int dire[8][2] = { {-1, -1}, {0, -1}, {1, -1}, {-1, 0}, {1, 0}, {-1, 1}, {0, 1}, {1, 1} };
int pic[MAXN][MAXN] = { 0 };
int main() {
	map<int, int> m;
	long M, N, TOL;
	cin >> M >> N >> TOL;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> pic[i][j];
			m[pic[i][j]]++;
		}
	}
	int x, y;
	long value;
	bool isUnique = true;
	bool isExist = false;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (m[pic[i][j]] == 1) {
				int cnt = 0;
				for (int k = 0; k < 8; k++) {
					int ni = i + dire[k][0];
					int nj = j + dire[k][1];
					if (ni >= 0 && ni < N && nj >= 0 && nj < M && abs(pic[i][j] - pic[ni][nj]) <= TOL) {
						cnt++;
					}
				}
				if (cnt == 0) {
					if (isExist == false) {
						isExist = true;
						x = j + 1;
						y = i + 1;
						value = pic[i][j];
					}else if (isExist == true) {
						isUnique = false;
					}
				}
			}
		}
	}
	if (isExist == false) {
		cout << "Not Exist" << endl;
	}
	if (isUnique == false) {
		cout << "Not Unique" << endl;
	}
	if (isExist == true && isUnique == true) {
		printf("(%d, %d): %ld\n", x, y, value);
	}
	return 0;
}