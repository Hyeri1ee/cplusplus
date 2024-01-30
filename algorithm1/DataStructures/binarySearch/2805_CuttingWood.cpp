#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int* s = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> s[i];
	}
	int low = 0;
	int high = *max_element(s, s + N);
	int x = 0;
	int mid;

	vector <int> ans;
	while (low <= high) {
		int total = 0;
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