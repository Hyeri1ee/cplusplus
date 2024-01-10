#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
bool isInPy(char py[], char& s)
{
	bool ans = false;
	for (int i = 0; i < 6; i++)
	{
		if (s == py[i])
		{
			ans = true;
			break;
		}
	}
	return ans;
}
int main() {
	char py[6] = { '+' , '-' ,'*', '/' , '(',')' };
	string s;
	string ans="";
	stack<char> k; //괄호+연산자 스택
	cin >> s; // A*(B+C)

	for (int i = 0; i < s.length(); i++)
	{
		if (isInPy(py, s[i]))
			k.push(s[i]);
		else //! isInPy()
		{
			ans += s[i];
		}
	}
	
	
	return 0;
}