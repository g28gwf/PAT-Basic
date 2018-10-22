//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	int GalleonP, SickleP, KnutP;
//	int GalleonA, SickleA, KnutA;
//	int Galleon, Sickle, Knut;
//	scanf("%d.%d.%d", &GalleonP, &SickleP, &KnutP);
//	scanf("%d.%d.%d", &GalleonA, &SickleA, &KnutA);
//	int moneyP = GalleonP * 17 * 29 + SickleP * 29 + KnutP;
//	int moneyA = GalleonA * 17 * 29 + SickleA * 29 + KnutA;
//	int money = moneyA - moneyP;
//	Galleon = (money / 17 / 29);
//	Sickle = ((money - Galleon * 17 * 29) / 29);
//	Knut = (money - Galleon * 17 * 29 - Sickle * 29);
//	if (money > 0) {
//		cout << Galleon << '.' << Sickle << '.' << Knut << endl;
//	} else {
//		cout << -abs(Galleon) << '.' << abs(Sickle) << '.' << abs(Knut) << endl;
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main() {
	int GP, SP, KP;
	int GA, SA, KA;
	scanf("%d.%d.%d %d.%d.%d", &GP, &SP, &KP, &GA, &SA, &KA);
	int P, A;
	P = GP * 17 * 29 + SP * 29 + KP;
	A = GA * 17 * 29 + SA * 29 + KA;
	int ans = A - P;
	if (ans < 0) {
		cout << '-';
		ans = -ans;
	}
	int GAns, SAns, KAns;
	GAns = ans / 17 / 29;
	SAns = (ans - GAns * 17 * 29) / 29;
	KAns = ans - GAns * 17 * 29 - SAns * 29;
	cout << GAns << '.' << SAns << '.' << KAns << endl;
	return 0;
}