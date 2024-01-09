#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
bool isVPS(string & s)
{
	stack<char> ch;
	bool valid = true;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
			ch.push('(');
		else if (s[i] == ')')
		{
			if (!ch.empty())
				ch.pop();
			else
				valid = false;
		}
		else
			valid = false;
	}
	if (ch.size() != 0)
		valid = false;
	return valid;

}

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string in;
		cin >> in;
		if (isVPS(in))
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}