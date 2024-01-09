#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	
	vector<stack<int>> stacks;
	for (int i = 0; i < 6; i++)
	{
		stack<int> k;
		stacks.push_back(k);
	}
	int count = 0;
	int n, p;
	cin >> n >> p;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		
		while (!stacks[a-1].empty() && stacks[a-1].top() > b)
		{
			stacks[a - 1].pop();
			count++;
		}
		//그 외의 경우들
		if (stacks[a - 1].empty() || stacks[a - 1].top() < b)
		{
			stacks[a - 1].push(b);
			count++;
		}


	}
	cout << count;
	return 0;
}