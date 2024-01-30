#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, L, x;
	cin >> N >> L;
	vector<int> ans;
	deque<pair<int, int>> de; //deque <값, index>
	for (int i = 0; i < N; i++) {
		if (!de.empty() && de.front().second < i - L + 1) {
			//i-L 이하의 인덱스 원소들은 지우기
			de.pop_front();
		}
		cin >> x;//새로 들어오는 원소의 값
		while (!de.empty() && de.back().first > x) { //결국 이 과정에서 오름차순으로 de이 정렬됨
			//x보다 큰 값을 가진 원소들은 삭제
			de.pop_back();
		}
		de.push_back(make_pair(x, i));
		ans.push_back(de.front().first);

	}
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	return 0;
}