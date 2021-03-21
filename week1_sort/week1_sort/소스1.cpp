#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(const int a, const int b) {
	return a > b;
}

int main() {
	int arr[5] = { 5,2,1,3,4 };
	vector<int>vec{ 5,4,1,3,2 };
	cout << "배열을 내림차순으로 정렬: ";
	sort(arr, arr + 5, compare);
	for (int i{ 0 }; i < 5; ++i) {
		cout << arr[i] << " ";
	}
	cout << "\n벡터를 내림차순으로 정렬: ";
	sort(vec.begin(), vec.end(), compare);
	for (int v : vec) {
		cout << v << " ";
	}
	return 0;
}
