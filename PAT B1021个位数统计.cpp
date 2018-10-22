//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int num[1000] = {0};
//	int n;
//	int a[10] = {0};
//	int index = 0;
//	while((n = getchar()) != EOF){
//		num[index++] = n;
//	}
//	for(int i = 0; i < index; i++){
//		a[num[i] - '0']++;
//	}
//	for(int i = 0; i < 10; i++){
//		if(a[i] != 0){
//			cout << i << ':' << a[i] << endl;
//		}
//	}
//	return 0;
//} 
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	string N;
	cin >> N;
	vector<int> v(10);
	for (int i = 0; i < N.size(); i++) {
		v[N[i] - '0']++;
	}
	for (int i = 0; i < v.size(); i++) {
		if (v[i] != 0) {
			cout << i << ':' << v[i] << endl;
		}
	}
	return 0;
}