#include <iostream>
using namespace std;

int main() {
	int n = 0;
	int score[1001];
	int sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}

	int max_val = 0;
	for (int i = 0; i < n; i++) {
		sum += score[i];
		if (max_val < score[i]) {
			max_val = score[i];
		}
	}

	double result = sum * 100.0 / max_val / n;
	cout << result << endl;
	return 0;
}
