#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int count = 0;
	int n;
	vector<int> inputs;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int in;
		cin >> in;
		inputs.push_back(in);
	}

	for (int i = 0; i < n; i++)
	{
		stack<int>k;
		k.push(inputs[i]);
		
	}
	return 0;
}