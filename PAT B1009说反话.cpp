//#include<iostream>
//#include<cstring>
//#include<vector>
//#include<string>
//#define MAX 80
//using namespace std;
//int main()
//{
//	vector<string> strvi;
//	string str;
//	while(cin >> str){
//		strvi.push_back(str);
//	}
//	for(vector<string>::iterator it = strvi.end() - 1; it >= strvi.begin(); it--){
//		if(it != strvi.begin()){
//			cout << *it << ' ';
//		}else{
//			cout << *it << endl;
//		}
//	}
//	return 0;
//} 
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main() {
	string s;
	//getline(cin, s);
	vector<string> v;
	//string temp = "";
	string temp;
	//for (int i = 0; i < s.size(); i++) {
	//	if (s[i] != ' ') {
	//		temp += s[i];
	//	}else {
	//		v.push_back(temp);
	//		temp = "";
	//	}
	//}
	//v.push_back(temp);
	while (cin >> temp) {
		v.push_back(temp);
	}
	reverse(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		if (i != v.size() - 1) {
			cout << v[i] << ' ';
		}else {
			cout << v[i] << endl;
		}
	}
	return 0;
}