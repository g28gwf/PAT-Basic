//#include<iostream>
//#include<algorithm>
//using namespace std;
//int stack[1000] = {0};
//void process(long long n, int d)
//{
//	int index = 0;
//	do{
//		stack[index++] = n % d;
//		n /= d;
//	}while(n != 0);
//	for(int i = index - 1; i >= 0; i--){
//		cout << stack[i];
//	}
//	cout << endl;
//}
//int main()
//{
//	long long a, b;
//	int d;
//	cin >> a >> b >> d;
//	process(a + b, d);
//	return 0;
//}
#include<iostream>
#include<vector>
using namespace std;
int main() {
	long long A, B, D;
	cin >> A >> B >> D;
	vector<int> stack;
	long long sum = A + B;
	while (sum != 0) {
		stack.push_back(sum % D);
		sum /= D;
	}
	if (stack.size() != 0) {
		for (int i = stack.size() - 1; i >= 0; i--) {
			cout << stack[i];
		}
	}else {
		cout << "0";
	}
	return 0;
}