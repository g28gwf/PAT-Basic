//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main()
//{
////	freopen("input.txt", "r", stdin);
//	int ASCII[151] = {0};
//	int flag[151] = {0};
//	char ch[81];
//	int i;
//	string str1, str2;
//	cin >> str1 >> str2;
//	for(i = 0; i < str2.size(); i++){
//		ASCII[str2[i]] = 1;
//	}
//	int cnt = 0;
//	for(i = 0; i < str1.size(); i++){
////		ASCII[str1[i]] = 1;
//		if(ASCII[str1[i]] == 0 && flag[str1[i]] == 0){
//			if(str1[i] >= 'A' && str1[i] <= 'Z'){
//				flag[str1[i]] = 1;
//				flag[str1[i] + 32] = 1;
//				ch[cnt++] = str1[i];
//			}else if(str1[i] >= 'a' && str1[i] <= 'z'){
//				flag[str1[i]] = 1;
//				flag[str1[i] - 32] = 1;
//				ch[cnt++] = str1[i] - 32;
//			}else{
//				flag[str1[i]] = 1;
//				ch[cnt++] = str1[i];
//			}
//		}
//	}
//	for(i = 0; i < cnt; i++){
//		cout << ch[i];
//	}
//	cout << endl;
//	return 0;
//}
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int m[151] = {0};
	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 0; i < s2.size(); i++) {
		if (s2[i] >= 'a' && s2[i] <= 'z' && m[s2[i] - 32] == 0) {
			m[s2[i] - 32]++;
		}else if(m[s2[i]] == 0){
			m[s2[i]]++;
		}
	}
	vector<char> v;
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] >= 'a' && s1[i] <= 'z') {
			if (m[s1[i] - 32] == 0) {
				v.push_back(s1[i] - 32);
				m[s1[i] - 32]++;
			}
		}else if(m[s1[i]] == 0){
			v.push_back(s1[i]);
			m[s1[i]]++;
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}
	return 0;
}