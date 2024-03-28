#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string nums;
	int sum = 0;

	cin >> n;
	cin >> nums;

	for (int i = 0; i < nums.length(); i++) {
		sum += (int)(nums[i] - '0');
	}

	cout << sum << endl;
	return 0;
}