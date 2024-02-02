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
		mid = (low + high) / 2; //���� ��ġ

		for (int i = 0; i < N; i++)
			if (s[i] > mid)
				total += s[i] - mid;
		if (total < M) {
			high = mid - 1;
		}
		else { //total >= M -> �� ��찡 �������� ���ϴ� ��� �̶��� x �� �ִ�� �� �� �ִ� ���� ���ϴ� ����.
			x = mid;
			low = mid + 1;
		}
	}
	cout << x;
	return 0;
}