#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int arr[5] = { 5,2,3,4,1 };
	vector<int>vec{ 5,2,3,4,1 };
	cout << "배열을 오름차순으로 정렬: ";
	sort(arr, arr + 5);
	for (int i{ 0 }; i < 5; ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n벡터를 오름차순으로 정렬";
	sort(vec.begin(), vec.end());
	for (int v : vec) {
		cout << v << " ";
	}
}