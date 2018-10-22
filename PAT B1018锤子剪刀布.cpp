#include<iostream>
#include<cmath>
#include<map>
#define maxN 1001
using namespace std;
long pic[maxN][maxN] = { 0 };
int dire[8][2] = { { -1, -1 },{ 0, -1 },{ 1, -1 },{ -1, 0 },{ 1, 0 },{ -1, 1 },{ 0, 1 },{ 1, 1 } };
int main() {
	map<long, int> m;
	int M, N, TOL;
	cin >> M >> N >> TOL;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> pic[i][j];
			m[pic[i][j]]++;
		}
	}
	bool isUnique = true;
	bool isExist = false;
	int x, y;
	long value;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			bool isValid = true;
			if (m[pic[i][j]] == 1) {
				for (int k = 0; k < 8; k++) {
					int ni = i + dire[k][0];
					int nj = j + dire[k][1];
					if (ni >= 0 && ni < N && nj >= 0 && nj < M &&
						abs(dire[ni][ni] - pic[i][j]) <= TOL) {
						isValid = false;
						break;
					}
				}
				if (isValid == true) {
					if (isUnique == true && isExist == false) {
						x = j + 1;
						y = i + 1;
						value = pic[i][j];
						isExist = true;
					}
					else if (isUnique == true && isExist == true) {
						isUnique = false;
						cout << "Not Unique" << endl;
						break;
					}
				}
			}
		}
		if (isUnique == false) {
			break;
		}
	}
	if (isUnique == true) {
		if (isExist == false) {
			cout << "Not Exist" << endl;
		}
		else {
			printf("(%d, %d): %ld\n", x, y, value);
		}
	}
	return 0;
}