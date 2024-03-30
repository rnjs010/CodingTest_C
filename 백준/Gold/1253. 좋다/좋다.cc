#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> arr(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int k = arr[i];
		int x = 0, y = n - 1;
		while (x < y) {
			if (arr[x] + arr[y] == k) {
				if (i != x && i != y) {
					cnt += 1;
					break;
				}
				else if (i == x) {
					x += 1;
				}
				else if (i == y) {
					y -= 1;
				}
			}
			else if (arr[x] + arr[y] > k) {
				y -= 1;
			}
			else {
				x += 1;
			}
		}
	}

	cout << cnt << "\n";
	return 0;
}