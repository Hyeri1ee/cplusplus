#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;

	priority_queue<int, vector<int>,greater<int>> q;
	while (N--) {
		int a;
		cin >> a;
		if (a == 0)
		{
			if (q.empty())
				cout << "0\n";
			else {
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else
		{
			q.push(a);
		}
	}

	return 0;
}