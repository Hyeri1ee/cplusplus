#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int binary_search(int start, int end, int* s) {
	if ((s[start] + s[end]) % 2) return 0;
	
	int target = (s[start] + s[end]) / 2;
	int mid = (start + end) / 2;

	while (start <= end)
	{
		if (s[mid] == target) return 1;
		else if (s[mid] < target) start = mid + 1;
		else end = mid - 1;

		mid = (start + end) / 2;
	}

	return 0;
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	
	string count = "";
	while (T--) {
		

		int N;
		cin >> N;
		int* v = new int[N];
		for (int i = 0; i < N; i++) {
			int a;
			cin >> a;
			v[i] = a;
		}
		//v �������� ����
		sort(v, v+N);
		int ans = 0;

		for (int i = 0; i < N; i++) {//N���� �� �߿��� �� �� i,j�� ���� ��� ����� ��
			for (int j = i + 2; j < N; j++) {//i�� j ���̿� ��� �ϳ��� ���� �ֵ��� j=i+2���� �����Ѵ�.
				ans += binary_search(i, j, v);
			}
		}
		count += to_string(ans);
		count += '\n';
	}
	cout << count;
	
	return 0;
}