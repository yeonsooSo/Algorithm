#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int arr[5] = { 5,2,3,4,1 };
	vector<int>vec{ 5,2,3,4,1 };
	cout << "�迭�� ������������ ����: ";
	sort(arr, arr + 5);
	for (int i{ 0 }; i < 5; ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n���͸� ������������ ����";
	sort(vec.begin(), vec.end());
	for (int v : vec) {
		cout << v << " ";
	}
}