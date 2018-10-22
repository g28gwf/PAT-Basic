//#include<iostream>
//#include<ctime>
//using namespace std;
//int main()
//{
//	long long a, b;
//	cin >> a >> b;
//	double runningTime = (float)(b - a) / 100 + 0.5;
//	int hh, mm, ss; 
//	hh = runningTime / (60 * 60);
//	mm = runningTime / 60 - 60 * hh;
//	ss = runningTime - 60 * mm - 60 * 60 * hh;
//	printf("%02d:%02d:%02d\n", hh, mm, ss);
//	return 0;
//} 
#include<iostream>
#define CLK_TCK 100
using namespace std;
int main() {
	int C1, C2;
	cin >> C1 >> C2;
	int hh, mm, ss;
	int second = (double)(C2 - C1) / CLK_TCK + 0.5;
	hh = second / 3600;
	ss = second % 60;
	mm = (second - hh * 3600 - ss) / 60;
	printf("%02d:%02d:%02d\n", hh, mm, ss);
	return 0;
}