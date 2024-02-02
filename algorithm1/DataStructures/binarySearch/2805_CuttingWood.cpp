#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	long long* s = new long long[N];
	for (int i = 0; i < N; i++)
	{
		cin >> s[i];
	}
	long long low = 0;
	long long high = *max_element(s, s + N);
	long long x = 0;
	long long mid;

	vector <int> ans;
	while (low <= high) {
		long long total = 0;
		mid = (low + high) / 2; //톱의 위치

		for (int i = 0; i < N; i++)
			if (s[i] > mid)
				total += s[i] - mid;
		if (total < M) {
			high = mid - 1;
		}
		else { //total >= M -> 이 경우가 문제에서 원하는 경우 이때에 x 가 최대로 갈 수 있는 값을 구하는 것임.
			x = mid;
			low = mid + 1;
		}
	}
	cout << x;
	return 0;
}