#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int> arr(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	int x = 0, y = n - 1;
	int cnt = 0;

	while (x < y) {
		if (arr[x] + arr[y] == m) {
			cnt += 1;
			x += 1;
			y -= 1;
		}
		else if (arr[x] + arr[y] > m) {
			y -= 1;
		}
		else {
			x += 1;
		}
	}
	cout << cnt << "\n";
	return 0;
}