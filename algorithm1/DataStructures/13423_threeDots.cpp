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
		//v 오름차순 정렬
		sort(v, v+N);
		int ans = 0;

		for (int i = 0; i < N; i++) {//N개의 점 중에서 두 점 i,j를 고르는 모든 경우의 수
			for (int j = i + 2; j < N; j++) {//i와 j 사이에 적어도 하나의 점이 있도록 j=i+2부터 시작한다.
				ans += binary_search(i, j, v);
			}
		}
		count += to_string(ans);
		count += '\n';
	}
	cout << count;
	
	return 0;
}