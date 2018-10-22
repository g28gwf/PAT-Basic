//#include<iostream>
//#include<vector>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	cout.precision(1);
//	vector<int> A1, A2, A3, A4, A5;
//	int a1 = 0, a2 = 0, a3 = 0, a5 = 0;
//	double a4 = 0.0;
//	int n;
//	int temp;
//	cin >> n;
//	for(int i = 0; i < n; i++){
//		cin >> temp;
//		if(temp % 5 == 0){
//			A1.push_back(temp);
//		}else if(temp % 5 == 1){
//			A2.push_back(temp);
//		}else if(temp % 5 == 2){
//			A3.push_back(temp);
//		}else if(temp % 5 == 3){
//			A4.push_back(temp);
//		}else if(temp % 5 == 4){
//			A5.push_back(temp);
//		}
//	}
//	int cnt = 0;
//	for(vector<int>::iterator it = A1.begin(); it != A1.end(); it++){
//		if(*it % 2 == 0){
//			a1 += *it;
//			cnt++;
//		}
//	}
//	int flag = 1;
//	for(vector<int>::iterator it = A2.begin(); it != A2.end(); it++){
//		a2 += flag * (*it);
//		flag *= -1;
//	}
//	a3 = A3.size();
//	for(vector<int>::iterator it = A4.begin(); it != A4.end(); it++){
//		a4 = a4 + (double)(*it) / A4.size();
//	}
//	int maxN = -9999;
//	for(vector<int>::iterator it = A5.begin(); it != A5.end(); it++){
//		if((*it) > maxN){
//			maxN = (*it);
//		}
//	}
//	a5 = maxN;
//	if(A1.size() == 0 || cnt == 0){
//		cout << "N "; 
//	}else{
//		cout << a1 << ' ';
//	}
//	if(A2.size() == 0){
//		cout << "N ";
//	}else{
//		cout << a2 << ' ';
//	}
//	if(A3.size() == 0){
//		cout << "N ";
//	}else{
//		cout << a3 << ' ';
//	}
//	if(A4.size() == 0){
//		cout << "N ";
//	}else{
//		cout  << fixed << a4 << ' ';
//	}
//	if(A5.size() == 0){
//		cout << "N" << endl;
//	}else{
//		cout << a5 << endl;
//	}
//	return 0;
//}
#include<iostream>
#include<vector>
using namespace std;
int main() {
	int N;
	cin >> N;
	vector<int> A1, A2, A3, A4, A5;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		if (temp % 5 == 0 && temp % 2 == 0) {
			A1.push_back(temp);
		}
		if (temp % 5 == 1) {
			A2.push_back(temp);
		}
		if (temp % 5 == 2) {
			A3.push_back(temp);
		}
		if (temp % 5 == 3) {
			A4.push_back(temp);
		}
		if (temp % 5 == 4) {
			A5.push_back(temp);
		}
	}
	int sumA1 = 0;
	for (int i = 0; i < A1.size(); i++) {
		sumA1 += A1[i];
	}
	int flag = 1;
	int sumA2 = 0;
	for (int i = 0; i < A2.size(); i++) {
		sumA2 += A2[i] * flag;
		flag *= -1;
	}
	int sumA3 = A3.size();
	double sumA4 = 0;
	for (int i = 0; i < A4.size(); i++) {
		sumA4 += 1.0 * A4[i] / A4.size();
	}
	int sumA5 = -1;
	for (int i = 0; i < A5.size(); i++) {
		if (sumA5 < A5[i]) {
			sumA5 = A5[i];
		}
	}
	if (A1.size() != 0) {
		cout << sumA1 << ' ';
	}else {
		cout << 'N' << ' ';
	}
	if (A2.size() != 0) {
		cout << sumA2 << ' ';
	}else {
		cout << 'N' << ' ';
	}
	if (A3.size() != 0) {
		cout << sumA3 << ' ';
	}else {
		cout << 'N' << ' ';
	}
	if (A4.size() != 0) {
		printf("%.1lf ", sumA4);
	}
	else {
		cout << 'N' << ' ';
	}
	if (A5.size() != 0) {
		cout << sumA5 << endl;
	}else {
		cout << 'N' << endl;
	}
	return 0;
}