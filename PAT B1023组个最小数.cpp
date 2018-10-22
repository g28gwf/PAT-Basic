//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int num[10] = {0};
//	int cnt = 0;
//	int temp;
//	for(int i = 0; i <= 9; i++){
//		cin >> temp;
//		num[i] = temp;
//		cnt += temp;
//	}
//	for(int i = 1; i <= 9; i++){
//		if(num[i] != 0 && cnt == 1){
//			cout << i << endl;
//			num[i]--;
//			cnt--;
//			break;
//		}else if(num[i] != 0 && cnt > 1){
//			cout << i;
//			num[i]--;
//			cnt--;
//			break;
//		}
//	}
//	if(cnt != 0){
//		for(int i = 0; i <= 9; i++){
//			if(num[i] != 0){
//				while(num[i] != 0){
//					if(cnt != 0){
//						cout << i;
//						num[i]--;
//						cnt--;
//					}else if(cnt == 0){
//						cout << i << endl;
//						break;
//					}	
//				}
//			}
//		}
//	}else{
//		cout << 0 << endl;
//	}
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		int temp;
		cin >> temp;
		while (temp != 0) {
			v.push_back(i); 
			temp--;
		}
	}
	int minN = 10;
	int index;
	for (int i = 0; i < v.size(); i++) {
		if (minN > v[i] && v[i] != 0) {
			minN = v[i];
			index = i;
		}
	}
	v.erase(v.begin() + index);
	sort(v.begin(), v.end());
	cout << minN;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}
	return 0;
}