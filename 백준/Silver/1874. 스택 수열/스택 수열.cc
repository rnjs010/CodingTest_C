#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> arr(n, 0);
	vector<char> resultArr;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	stack<int> s;
	int num = 1;
	bool ans = true;
	for (int i = 0; i < n; i++) {
		int current = arr[i];
		if (current >= num) {
			while (current >= num) {
				s.push(num++);
				resultArr.push_back('+');
			}
			s.pop();
			resultArr.push_back('-');
		}
		else {
			if (s.top() > current) {
				cout << "NO";
				ans = false;
				break;
			}
			else {
				s.pop();
				resultArr.push_back('-');
			}
		}
	}

	if (ans) {
		for (int i = 0; i < resultArr.size(); i++) {
			cout << resultArr[i] << "\n";
		}
	}
	
	return 0;
}