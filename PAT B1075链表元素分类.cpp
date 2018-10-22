//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//struct Node {
//	int next;
//	int data;
//};
////vector<int> v1, v2, v3;
//vector<int> v[3];
////unordered_map<int, int> add, nextAdd, dataM;
//unordered_map<int, Node> m;
//int main() {
//	int firstAdd, N, K;
//	cin >> firstAdd >> N >> K;
//	for (int i = 0; i < N; i++) {
//		int Add, Data, Next;
//		cin >> Add >> Data >> Next;
//		m[Add].data = Data;
//		m[Add].next = Next;
//	}
//	int temp = firstAdd;
//	while (temp != -1) {
//		int Data = m[temp].data;
//		if (Data < 0) {
//			v[0].push_back(temp);
//		}
//		else if (Data >= 0 && Data <= K) {
//			v[1].push_back(temp);
//		}
//		else {
//			v[2].push_back(temp);
//		}
//		temp = m[temp].next;
//	}
//	int flag = 0;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < v[i].size(); j++) {
//			if (flag == 0) {
//				printf("%05d %d ", v[i][j], m[v[i][j]].data);
//				flag = 1;
//			}else {
//				printf("%05d\n%05d %d ", v[i][j], v[i][j], m[v[i][j]].data);
//			}
//		}
//	}
//	printf("-1");
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//vector<vector<int> > v(3);
//unordered_map<int, int> Data;
//unordered_map<int, int> nextAddress;
//unordered_map<int, int> address;
//int main() {
//	int headAddress, N, K;
//	cin >> headAddress >> N >> K;
//	for (int i = 0; i < N; i++) {
//		int Address, data, Next;
//		cin >> Address >> data >> Next;
//		Data[Address] = data;
//		nextAddress[Address] = Next;
//		address[data] = Address;
//	}
//	int p = headAddress;
//	while (p != -1) {
//		if(Data[p] < 0){
//			v[0].push_back(Data[p]);
//		}else if (Data[p] >= 0 && Data[p] <= K) {
//			v[1].push_back(Data[p]);
//		}else {
//			v[2].push_back(Data[p]);
//		}
//		p = nextAddress[p];
//	}
//	//int i;
//	//for (i = 0; i < 3; i++) {
//	//	printf("%05d ", address[v[i][0]]);
//	//	int j;
//	//	for (j = 1; j < v[i].size(); j++) {
//	//		printf("%d %05d\n%05d ", v[i][j - 1], address[v[i][j]], address[v[i][j]]);
//	//	}
//	//	if (i == 2 && j == v[2].size()) {
//	//		printf("%d -1\n", v[i][--j]);
//	//	}else {
//	//		printf("%d %05d\n", v[i][--j], address[v[i + 1][0]]);
//	//	}
//	//}
//	int isFirst = true;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < v[i].size(); j++) {
//			if (isFirst == true) {
//				isFirst = false;
//				printf("%05d %d ", address[v[0][0]], v[0][0]);
//			}else {
//				printf("%05d\n%05d %d ", address[v[i][j]], address[v[i][j]], v[i][j]);
//			}
//		}
//	}cout << "-1" << endl;
//	return 0;
//}
#include<iostream>
#include<vector>
#include<map>
using namespace std;
struct Node {
	int address;
	int data;
	int next;
};
vector<Node> v[3];
map<int, Node> m;
int main() {
	int N, K;
	int firstAddress;
	cin >> firstAddress >> N >> K;
	for (int i = 0; i < N; i++) {
		int address, data, next;
		cin >> address >> data >> next;
		m[address].address = address;
		m[address].data = data;
		m[address].next = next;
	}
	int p = firstAddress;
	while (p != -1) {
		if (m[p].data < 0) {
			v[0].push_back(m[p]);
		}else if (m[p].data >= 0 && m[p].data <= K) {
			v[1].push_back(m[p]);
		}else {
			v[2].push_back(m[p]);
		}
		p = m[p].next;
	}
	int isFirst = true;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < v[i].size(); j++) {
			if (isFirst == true) {
				printf("%05d %d ", v[i][j].address, v[i][j].data);
				isFirst = false;
			}else {
				printf("%05d\n%05d %d ", v[i][j].address, v[i][j].address, v[i][j].data);
			}
		}
	}
	cout << "-1" << endl;
	return 0;
}