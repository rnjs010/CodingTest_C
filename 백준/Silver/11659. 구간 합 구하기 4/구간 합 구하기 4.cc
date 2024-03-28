#include <iostream>
using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	int prefix_sum[100001] = { 0, };
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		prefix_sum[i] = prefix_sum[i - 1] + a;
	}
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		cout << prefix_sum[y] - prefix_sum[x - 1] << "\n";
	}
	return 0;
}
