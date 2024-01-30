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
	deque<pair<int, int>> de; //deque <��, index>
	for (int i = 0; i < N; i++) {
		if (!de.empty() && de.front().second < i - L + 1) {
			//i-L ������ �ε��� ���ҵ��� �����
			de.pop_front();
		}
		cin >> x;//���� ������ ������ ��
		while (!de.empty() && de.back().first > x) { //�ᱹ �� �������� ������������ de�� ���ĵ�
			//x���� ū ���� ���� ���ҵ��� ����
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