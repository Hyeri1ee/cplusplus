#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n;
	int count = 0;
	cin >> n;
	while (n--)
	{
		string s;
		stack<char> st;
		cin >> s;
		for (int i = 0; i < s.length(); i++)
		{
			if (st.size() == 0 || st.top() != s[i])
				st.push(s[i]);
			else if (st.top() == s[i])
				st.pop();
			

		}
		if (st.size() == 0)
			count++;

	}
	cout << count;
	return 0;
}