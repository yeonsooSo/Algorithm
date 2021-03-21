#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//4C2
int main() {
	vector<int>vec{ 1,2,3,4 };
	vector<int>check{ 1,1,0,0 };
	//check배열을 만들어 r개의 원소에 1을, n-r개의 원소에
	//0을 넣어준다.
	do {
		for (int i{ 0 }; i < vec.size(); ++i) {
			if (check[i] == 1) {
				cout << vec[i] << ' ';
			}
		}
		cout << "\n";
	} while (prev_permutation(check.begin(), check.end()));
}
//prev_permutation 함수를 통해 check의 모든 순열을 구하면서
//check배열의 값이 1인 인덱스만 vec벡터에서 가져오면
//vec배열의 모든 조합을 출력할 수 있다.