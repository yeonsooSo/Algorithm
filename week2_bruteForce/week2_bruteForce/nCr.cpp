#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//4C2
int main() {
	vector<int>vec{ 1,2,3,4 };
	vector<int>check{ 1,1,0,0 };
	//check�迭�� ����� r���� ���ҿ� 1��, n-r���� ���ҿ�
	//0�� �־��ش�.
	do {
		for (int i{ 0 }; i < vec.size(); ++i) {
			if (check[i] == 1) {
				cout << vec[i] << ' ';
			}
		}
		cout << "\n";
	} while (prev_permutation(check.begin(), check.end()));
}
//prev_permutation �Լ��� ���� check�� ��� ������ ���ϸ鼭
//check�迭�� ���� 1�� �ε����� vec���Ϳ��� ��������
//vec�迭�� ��� ������ ����� �� �ִ�.