#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int priority(char ch)
{
	if (ch == '+' || ch == '-') return 1;
	if (ch == '*' || ch == '/') return 2;
	return 0; 
}
int main() {
	string s;
	string ans="";
	stack<char> k; //괄호+연산자 스택
	cin >> s; // A*(B+C)

	for (int i = 0; i < s.length(); i++)
	{
		//0) 피연산자는 출력
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			ans += s[i];
			continue;
		}

		//연산자 간의 우선순위 비교
		//1) s[i]가 '(' 인 경우, 스택이 비어있는 경우
		if (k.empty() || s[i] == '(')
		{
			k.push(s[i]);
			continue;
		}
		//2) ')'인 경우, '('를 만날때까지 출력
		if (s[i] == ')')
		{
			while (k.top() != '(')
			{
				ans += k.top();
				k.pop();
			}
			k.pop(); //'(' 는 삭제
			continue;
		}
		//3) top보다 우선순위가 크면 push
		if (priority(k.top()) < priority(s[i]))
			k.push(s[i]);

		//4) top보다 우선순위가 작거나 같으면 pop후 반복
		else
		{
			while (!k.empty() && priority(k.top()) >= priority(s[i]))
			{
				ans += k.top();
				k.pop();
			}
			k.push(s[i]);
		}
	}

		//5) 스택이 안 비었으면 전부 출력
		while (!k.empty())
		{
			ans += k.top();
			k.pop();
		}
		cout << ans;
		
	

	
	return 0;
}