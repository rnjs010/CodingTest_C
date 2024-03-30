#include <iostream>
using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int s_idx = 1, e_idx = 1, sum = 1;
	int cnt = 1;

	while (e_idx != n) {
		if (sum == n) {
			cnt += 1;
			e_idx++;
			sum += e_idx;
		}
		else if (sum > n) {
			sum -= s_idx;
			s_idx++;
		}
		else {
			e_idx++;
			sum += e_idx;
		}
	}
	cout << cnt << "\n";
	return 0;
}