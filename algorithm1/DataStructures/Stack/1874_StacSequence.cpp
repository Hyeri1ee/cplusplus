#include <iostream>
#include <vector>

using namespace std;
class Stack{
	int top;
	char ch[1000000];

public:
	Stack() { top = -1; }
	void pop() {
		top--;
	}

	void push() {
		ch[++top] = '+';
	}

	void print() {
		while (top != -1)
			cout << ch[top--]<<"\n";
	}
	int top2()
	{
		return top;
	}
}
int main() {

	int n;
	cin >> n;
	vector<int> sequence;//4 3 6 8 7 5 2 1
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		sequence.push_back(input);
	}

	Stack makeSequence;
	for (int i = 0; i < n; i++)
	{
		int m = sequence[i];
		while (makeSequence.top2() + 1 < m)
			makeSequence.push();
		makeSequence.pop();
	}
	return 0;
}