#include <iostream>
using namespace std;

void DFS(int current_num, int len);
bool isPrime(int num);
static int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    DFS(2, 1);
    DFS(3, 1);
    DFS(5, 1);
    DFS(7, 1);
}

void DFS(int current_num, int len) {
    if (len == n) {
        if (isPrime(current_num)) {
            cout << current_num << "\n";
        }
        return;
    }
    for (int i = 1; i < 10; i++) {
        if (i % 2 == 0) { // 짝수면 탐색할 필요 없음
            continue;
        }
        if (isPrime(current_num * 10 + i)) { // 소수면 재귀로 자리수 늘리기
            DFS(current_num * 10 + i, len + 1);
        }
    }
}

// 소수 판별 함수
bool isPrime(int num) {
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return false;
    return true;
}