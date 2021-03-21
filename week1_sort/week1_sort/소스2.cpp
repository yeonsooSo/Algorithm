#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	char arr[5] = { 'c','b','a','e','d' };
	double arr2[5] = { 0.01,0.001,0.9,5.5,3 };
	vector<string>vec{ "dolphin", "apple", "animal", "banana","camera" };
	cout << "char형을 사전순으로 정렬: ";
	sort(arr, arr + 5);
	for (int i{ 0 }; i < 5; ++i) {
		cout << arr[i] << " ";
	}
	cout << "\ndouble형을 내림차순으로 정렬: ";
	sort(arr2, arr2 + 5,greater<int>());
	for (int i{ 0 }; i < 5; ++i) {
		cout << arr2[i] << " ";
	}
	cout << "\nstring을 사전순으로 정렬: ";
	sort(vec.begin(), vec.end());
	for (string v : vec) {
		cout << v << " ";
	}
}