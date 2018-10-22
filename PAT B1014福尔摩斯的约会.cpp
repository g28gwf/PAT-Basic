//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//int main() {
//	map<char, string> m;
//	m['A'] = "MON";
//	m['B'] = "TUE";
//	m['C'] = "WED";
//	m['D'] = "THU";
//	m['E'] = "FRI";
//	m['F'] = "SAT";
//	m['G'] = "SUN";
//	string s1, s2, s3, s4;
//	cin >> s1 >> s2 >> s3 >> s4;
//	string weekday;
//	int size1 = s1.size() > s2.size() ? s2.size() : s1.size();
//	int size2 = s3.size() > s4.size() ? s3.size() : s4.size();
//	bool isFirst = true;
//	int hour = 0, minute = 0;
//	for (int i = 0; i < size1; i++) {
//		if (s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <= 'G' &&
//			s2[i] >= 'A' && s2[i] <= 'G' && isFirst == true) {
//			isFirst = false;
//			weekday = m[s1[i]];
//			continue;
//		}
//		if (s1[i] == s2[i] && isFirst == false && (s1[i] >= '0' && s1[i] <= '9' || s1[i] >= 'A' && s1[i] <= 'N')) {
//			if (s1[i] >= '0' && s1[i] <= '9') {
//				hour = s1[i] - '0';
//			}
//			if (s1[i] >= 'A' && s1[i] <= 'N') {
//				hour = s1[i] - 'A' + 10;
//			}
//			break;
//		}
//	}
//	for (int i = 0; i < size2; i++) {
//		if (s3[i] == s4[i] && (s3[i] >= 'A' && s3[i] <= 'Z' || s3[i] >= 'a' && s33[i] <= 'z')) {
//			minute = i;
//			break;
//		}
//	}
//	cout << weekday << " ";
//	printf("%02d:%02d\n", hour, minute);
//	return 0;
//}
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main() {
	map<char, string> m;
	m['A'] = "MON";
	m['B'] = "TUE";
	m['C'] = "WED";
	m['D'] = "THU";
	m['E'] = "FRI";
	m['F'] = "SAT";
	m['G'] = "SUN";
	string s1, s2, s3, s4;
	string DAY;
	int HH, MM;
	cin >> s1 >> s2 >> s3 >> s4;
	int size1 = s1.size() > s2.size() ? s2.size() : s1.size();
	int size2 = s3.size() > s4.size() ? s4.size() : s3.size();
	bool isFirst = true;
	for (int i = 0; i < size1; i++) {
		if (isFirst == true && s1[i] == s2[i] &&
			s1[i] >= 'A' && s1[i] <= 'G') {
			DAY = m[s1[i]];
			isFirst = false;
		}else if (isFirst == false && s1[i] == s2[i] &&
			(s1[i] >= 'A' && s1[i] <= 'N' ||
				s1[i] >= '0' && s1[i] <= '9')) {
			if (s1[i] >= '0' && s1[i] <= '9') {
				HH = s1[i] - '0';
			}
			if (s1[i] >= 'A' && s1[i] <= 'N') {
				HH = s1[i] - 'A' + 10;
			}
			break;
		}
	}
	for (int i = 0; i < size2; i++) {
		if (s3[i] == s4[i] && (s3[i] >= 'A' && s3[i] <= 'Z' ||
			s3[i] >= 'a' && s3[i] <= 'z')) {
			MM = i;
			break;
		}
	}
	cout << DAY << ' ';
	printf("%02d:%02d\n", HH, MM);
	return 0;
}