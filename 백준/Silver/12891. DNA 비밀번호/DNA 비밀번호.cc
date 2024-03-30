#include <iostream>
#include <string>
using namespace std;

int checkArr[4];	// 각 조건 저장
int currentArr[4];
int check = 0;	// 맞는 조건 개수 확인 (4라면 모든 조건 일치)
void Add(char c);
void Remove(char c);

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int s, p;
	cin >> s >> p;
	string str;
	cin >> str;
	int cnt = 0;

	for (int i = 0; i < 4; i++) {
		cin >> checkArr[i];
		if (checkArr[i] == 0) {
			check++;
		}
	}
	for (int i = 0; i < p; i++) {	// 시작 부분 문자열
		Add(str[i]);
	}
	if (check == 4) {
		cnt += 1;
	}
	
	for (int i = p; i < s; i++) {	// 슬라이딩 윈도우
		int j = i - p;
		Add(str[i]);
		Remove(str[j]);
		if (check == 4) {
			cnt += 1;
		}
	}
	cout << cnt << "\n";
	return 0;
}

void Add(char c) {
	int idx = 0;
	switch (c)
	{
	case 'A':
		idx = 0;
		break;
	case 'C':
		idx = 1;
		break;
	case 'G':
		idx = 2;
		break;
	case 'T':
		idx = 3;
		break;
	}

	currentArr[idx]++;
	if (currentArr[idx] == checkArr[idx]) {
		check++;
	}
}

void Remove(char c) {
	int idx = 0;
	switch (c)
	{
	case 'A':
		idx = 0;
		break;
	case 'C':
		idx = 1;
		break;
	case 'G':
		idx = 2;
		break;
	case 'T':
		idx = 3;
		break;
	}

	if (currentArr[idx] == checkArr[idx]) {
		check--;
	}
	currentArr[idx]--;
}