#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, L;
	cin >> N >> L;
	int* s = new int[N];
	string ans = "";
	for (int i = 0; i < N; i++) {
		cin >> s[i];
	}
	for (int i =  0 ; i < N;i++) {
		priority_queue<int, vector<int>, greater<int>> q;;
		int start, end;
		end = i;
		start = end - L +1 > 0 ? end-L+1 : 0;
		for (int j = start; j <= end; j++) {
			q.push(s[j]);
		}
		ans += to_string(q.top());
		ans += ' ';

	}
	cout << ans;

	return 0;
}