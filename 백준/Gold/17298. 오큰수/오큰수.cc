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
	vector<int> ans(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	stack<int> s;
	for (int i = 0; i < n; i++) {
		while (!s.empty() && arr[i] > arr[s.top()]) {
			ans[s.top()] = arr[i];
			s.pop();
		}
		s.push(i);
	}

	while (!s.empty()) {
		ans[s.top()] = -1;
		s.pop();
	}

	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}

	return 0;
}