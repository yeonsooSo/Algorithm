#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> vec{ 1,2,3 };
	sort(vec.begin(), vec.end());
	do {
		for (int i{ 0 }; i < 3; ++i) {
			cout << vec[i] << ' ';
		}
		cout << "\n";
	} while (next_permutation(vec.begin(), vec.end()));
}