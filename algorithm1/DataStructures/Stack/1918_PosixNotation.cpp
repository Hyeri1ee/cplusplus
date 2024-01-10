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
	stack<char> k; //��ȣ+������ ����
	cin >> s; // A*(B+C)

	for (int i = 0; i < s.length(); i++)
	{
		//0) �ǿ����ڴ� ���
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			ans += s[i];
			continue;
		}

		//������ ���� �켱���� ��
		//1) s[i]�� '(' �� ���, ������ ����ִ� ���
		if (k.empty() || s[i] == '(')
		{
			k.push(s[i]);
			continue;
		}
		//2) ')'�� ���, '('�� ���������� ���
		if (s[i] == ')')
		{
			while (k.top() != '(')
			{
				ans += k.top();
				k.pop();
			}
			k.pop(); //'(' �� ����
			continue;
		}
		//3) top���� �켱������ ũ�� push
		if (priority(k.top()) < priority(s[i]))
			k.push(s[i]);

		//4) top���� �켱������ �۰ų� ������ pop�� �ݺ�
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

		//5) ������ �� ������� ���� ���
		while (!k.empty())
		{
			ans += k.top();
			k.pop();
		}
		cout << ans;
		
	

	
	return 0;
}