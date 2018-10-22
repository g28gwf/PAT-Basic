//#include<iostream>
//using namespace std;
//long a, b, c, d;
//void config(long a, long b) {
//	bool isNeg = false;
//	if (a == 0) {
//		cout << '0';
//		return;
//	}
//	if (b == 0) {
//		cout << "Inf";
//		return;
//	}
//	if (a < 0 || b < 0) {
//		if (a < 0 && b < 0) {
//			isNeg = false;
//			a = -a;
//			b = -b;
//		}else if (a < 0 || b < 0) {
//			isNeg = true;
//			if (a < 0) {
//				a = -a;
//			}
//			if (b < 0) {
//				b = -b;
//			}
//		}
//	}
//	if (isNeg == true) {
//		cout << "(-";
//	}
//	long temp;
//	long A = a, B = b;
//	while (B != 0) {
//		temp = A % B;
//		A = B;
//		B = temp;
//	}
//	a /= A;
//	b /= A;
//	if (a == b) {
//		cout << '1';
//	}else if(a > b){
//		if (a % b != 0) {
//			cout << a / b << ' ' <<  a % b << '/' << b;
//		}else {
//			cout << a / b;
//		}
//	}else {
//		cout << a << '/' << b;
//	}
//	if (isNeg == true) {
//		cout << ')';
//	}
//}
//void add() {
//	config(a, b);
//	cout << " + ";
//	config(c, d);
//	cout << " = ";
//	config(a * d + b * c, b * d);
//	cout << endl;
//}
//void sub() {
//	config(a, b);
//	cout << " - ";
//	config(c, d);
//	cout << " = ";
//	config(a * d - b * c, b * d);
//	cout << endl;
//}
//void mul() {
//	config(a, b);
//	cout << " * ";
//	config(c, d);
//	cout << " = ";
//	config(a * c, b * d);
//	cout << endl;
//}
//void divi() {
//	config(a, b);
//	cout << " / ";
//	config(c, d);
//	cout << " = ";
//	config(a * d, b * c);
//	cout << endl;
//}
//int main() {
//	scanf("%ld/%ld %ld/%ld", &a, &b, &c, &d);
//	add();
//	sub();
//	mul();
//	divi();
//	return 0;
//}
#include<iostream>
using namespace std;
long a, b, c, d;
void config(long a, long b) {
	if (a == 0) {
		cout << '0';
		return;
	}
	if (b == 0) {
		cout << "Inf";
		return;
	}
	bool isNeg = false;
	if (a < 0 || b < 0) {
		if (a < 0 && b < 0) {
			a = -a;
			b = -b;
			isNeg = false;
		}else if(a < 0 || b < 0){
			if (a < 0) {
				isNeg = true;
				a = -a;
			}else if (b < 0) {
				isNeg = true;
				b = -b;
			}
		}
	}
	if (isNeg == true) {
		cout << "(-";
	}
	long A = a, B = b;
	long temp;
	while (B != 0) {
		temp = A % B;
		A = B;
		B = temp;
	}
	a /= A;
	b /= A;
	if (a == b) {
		cout << '1';
	}else if (a > b) {
		if (a % b == 0) {
			cout << a / b;
		}else {
			cout << a / b << ' ' << a % b << '/' << b;
		}
	}else {
		cout << a << '/' << b;
	}
	if (isNeg == true) {
		cout << ")";
	}
}
void add() {
	config(a, b);
	cout << " + ";
	config(c, d);
	cout << " = ";
	config(a * d + b * c, b * d);
	cout << endl;
}
void sub() {
	config(a, b);
	cout << " - ";
	config(c, d);
	cout << " = ";
	config(a * d - b * c, b * d);
	cout << endl;
}
void mul() {
	config(a, b);
	cout << " * ";
	config(c, d);
	cout << " = ";
	config(a * c, b * d);
	cout << endl;
}
void divi() {
	config(a, b);
	cout << " / ";
	config(c, d);
	cout << " = ";
	config(a * d, b * c);
	cout << endl;
}
int main() {
	scanf("%ld/%ld %ld/%ld", &a, &b, &c, &d);
	add();
	sub();
	mul();
	divi();
	return 0;
}