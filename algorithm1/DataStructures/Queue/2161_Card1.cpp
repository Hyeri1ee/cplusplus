#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
	int goTrash = 1;
	int n;
	cin >> n;

	queue<int> v;
	string ans ="";
	for (int i = 0; i < n; i++)
		v.push(i + 1);
	while (v.size() > 0)
	{
		if (goTrash) { //버리기
			int popped = v.front();
			v.pop();
			ans += to_string(popped);
			ans += " ";
			goTrash = 0;
		}
		else //뒤로 보내기
		{
			int backed = v.front();
			v.pop();
			v.push(backed);
			goTrash = 1;
		}
	}
	cout << ans;
	return 0;
}