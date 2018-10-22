//#include<iostream>
//#include<vector>
//#include<utility>
//using namespace std;
//int main()
//{
//	pair<int, int> p;
//	vector<pair<int, int> > vi;
//	vector<vector<pair<int, int> >::iterator> vit; 
//	while(cin >> p.first >> p.second){
//		vi.push_back(p);
//	}
//	for(vector<pair<int, int> >::iterator it = vi.begin(); it != vi.end(); it++){
//		if((*it).second != 0){
//			(*it).first *= (*it).second;
//			(*it).second--; 
//		}else if(vi.size() == 1 && (*it).second == 0){
//			(*it).first = 0;
//		}else if((*it).first != 0 && (*it).second == 0){
//			vit.push_back(it);
//		}
//	}
//	for(vector<vector<pair<int, int> >::iterator>::iterator it = vit.begin(); it != vit.end(); it++){
//		vi.erase(*it);
//	}
//	for(vector<pair<int, int> >::iterator it = vi.begin(); it != vi.end(); it++){
//		if(it != vi.end() - 1){
//			cout << (*it).first << ' ' << (*it).second << ' ';
//		}else{
//			cout << (*it).first << ' ' << (*it).second << endl;
//		}
//	}
//	return 0;
//} 
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int step = 0;
	bool isFirst = true;
	int a, b;
	while(cin >> a >> b){
		if ((a == 0 && b == 0) || (isFirst == true && b == 0)) {

			cout << "0 0";
		}
		if (b == 0) {
			break;
		}
		if (isFirst == true) {
			printf("%d %d", a * b, b - 1);
			isFirst = false;
		}else {
			printf(" %d %d", a * b, b - 1);
		}
	}
	return 0;
}