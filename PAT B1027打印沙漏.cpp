//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch;
//	int num;
//	cin >> num >> ch;
////	int x;
////	for(x = 1; ; x++){
////		if(2 * x * x - 1 > 1000){
////			cout << x << endl;
////			break;
////		}
////	}		//得到23为最大范围 
//	int temp;
//	int cnt = 0;
//	for(int i = 1; i <= 23; i++){
//		if(num < 2 * i * i - 1){
//			temp = i - 1;
//			break;
//		}
//	}
//	for(int i = temp; i > 1; i--){
//		for(int j = 0; j < (temp - i); j++){
//			cout << ' ';
//		}
//		for(int j = 0; j < 2 * i - 1; j++){
//			cout << ch;
//		}
//		cout << endl;
//	}
//	for(int i = 1; i <= temp; i++){
//		for(int j = 0; j < (temp - i); j++){
//			cout << ' ';
//		}
//		for(int j = 0; j < 2 * i - 1; j++){
//			cout << ch;
//		}		
////		if(i != temp){
//			cout << endl;
////		}
//	}
//	cout << num - 2 * temp * temp + 1 << endl;
//	return 0;
//} 
#include<iostream>
using namespace std;
int main() {
	int N;
	char c;
	cin >> N >> c;
	int table[24] = { 0 };
	int factor[24] = { 0 };
	table[0] = 1;
	factor[0] = 1;
	for (int i = 1; i < 24; i++) {
		table[i] = 2 * i * i + 4 * i + 1;
		factor[i] = 3 + (i - 1) * 2;
	}
	int index;
	for (index = 0; index < 24 - 1; index++) {
		if (table[index] <= N && table[index + 1] > N) {
			break;
		}
	}
	for (int i = 0; i < factor[index] / 2 + 1; i++) {
		for (int j = 0; j < i; j++) {
			cout << ' ';
		}
		for (int j = 0; j < factor[index - i]; j++) {
			cout << '*';
		}
		cout << endl;
	}
	for (int i = 0; i < factor[index] / 2; i++) {
		for (int j = 0; j < index - i - 1; j++) {
			cout << ' ';
		}
		for (int j = 0; j < factor[i + 1]; j++) {
			cout << '*';
		}
		cout << endl;
	}
	cout << N - table[index] << endl;
	return 0;
}