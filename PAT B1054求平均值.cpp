//#include<iostream>
//#include<cmath>
//#include<cstring>
//using namespace std;
//int main() {
//	int N;
//	cin >> N;
//	double ans = 0;
//	int num = 0;
//	for (int i = 0; i < N; i++) {
//		char s1[50], s2[50];
//		double d;
//		scanf("%s", s1);
//		sscanf(s1, "%lf", &d);
//		sprintf(s2, "%.2lf", d);
//		bool isValid = true;
//		for (int i = 0; i < strlen(s1); i++) {
//			if (s1[i] != s2[i]) {
//				isValid = false;
//				break;
//			}
//		}
//		if (isValid == true && fabs(d) <= 1000) {
//			num++;
//			ans += d;
//		}else {
//			cout << "ERROR: " << s1 << " is not a legal number" << endl;
//		}
//	}
//	if (num == 0) {
//		cout << "The average of 0 numbers is Undefined" << endl;
//	}else if (num == 1) {
//		cout << "The average of 1 number is ";
//		printf("%.2lf\n", ans / num);
//	}else {
//		cout << "The average of " << num << " numbers is ";
//		printf("%.2lf\n", ans / num);
//	}
//	return 0;
//}
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main() {
	int N;
	cin >> N;
	double ans = 0;
	int num = 0;
	for (int i = 0; i < N; i++) {
		char s1[50], s2[50];
		double d;
		scanf("%s", s1);
		sscanf(s1, "%lf", &d);
		sprintf(s2, "%.2lf", d);
		bool isValid = true;
		for (int j = 0; j < strlen(s1); j++) {
			if (s1[j] != s2[j]) {
				isValid = false;
				break;
			}
		}
		if (isValid == true && fabs(d) <= 1000) {
			num++;
			ans += d;
		}else {
			cout << "ERROR: " << s1 << " is not a legal number" << endl;
		}
	}
	if (num == 0) {
		printf("The average of 0 numbers is Undefined\n");
	}else if (num == 1) {
		printf("The average of 1 number is %.2lf\n", ans / num);
	}else {
		printf("The average of %d numbers is %.2lf\n", num, ans / num);
	}
	return 0;
}