#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	vector<char> pa;
	string s;


	getline(cin, s);  // 한 줄을 입력받음

	for (int i = 0; i < s.length(); i++)
	{
		pa.push_back(s[i]);
	}
	
	stack<char> ch;
	int allCount = 0;
	for (int i = 0; i < pa.size(); i++)
	{
		if (i+1 < pa.size() && pa[i] == '(' && pa[i + 1] == ')') // () 레이저
			allCount += ch.size();
		else if (i+1 < pa.size() && pa[i] == '(' && pa[i+1] == '(') // ( (인 (
			ch.push('(');
		else if (i - 1 >= 0 && pa[i - 1] == ')' && pa[i] == ')')
		{
			allCount++;
			ch.pop();
		}
	}
	cout << allCount;

	return 0;
}