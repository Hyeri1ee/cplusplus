#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int list[2000001];
int N,C,maxD,router,pre,ans;

void input() {
	cin >> N >> C;
	//정렬
	for (int i = 0; i < N; i++)
		cin >> list[i];
	sort(list, list + N);
	
}
void answer() {
	int l = 1, r = list[N-1] - list[0];//최소 거리, 최대 거리

	while (l <= r) {
		int m = (l + r) / 2;
		router = 1;
		pre = list[0];

		for (int n = 1; n < N; n++) {//필요한 공유기 개수 구하기 
			if ((list[n] - pre) >= m) {
				router++;
				pre = list[n];
			}
		}

		if (router >= C) {//공유기 수가 크면 간격을 늘려야함.
			l = m + 1;
			ans = (ans > m) ? ans : m;
		}
		else {//공유기 수가 작으면 간격을 줄여야함.
			r = m - 1;
		}
		
	}
	cout << ans;
}
int main() {
	input();
	answer();
	return 0;
}