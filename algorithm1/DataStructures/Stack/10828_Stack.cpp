#include <iostream>
#include <vector>
#include <string>
#include <istream>
using namespace std;
class Stack {
	int to;
	int data[10000];
	//���
	string s;

public:
	Stack() { to = -1; }
	~Stack() {}
	void empty() {
		if (to == -1)
			s += "1\n";
		else
			s += "0\n";
	}
	int isFull() { return to == 9999; }
	void push(int e)
	{
		if (isFull())
		{
			s += "It's Full\n";
			exit(1);
		}
		data[++to] = e;
	}
	void pop()
	{
		if (to != -1) { s += to_string(data[to--]); s+= "\n"; }
		else
			s+= "-1\n";
	}
	void size()
	{
		s+= to_string(to + 1)+"\n";
	}
	void print()
	{
		cout << s;
	}
	void top()
	{
		if (to != -1) { s += to_string(data[to]); s += "\n"; }
		else
			s += "-1\n";
	}

};
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	Stack stack;

	//�Է� 
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		string s;
		getline(cin,s,'\n');
		if (s.find("push") != string::npos) //push ��ɾ����� �Ǵ�
		{
			stack.push(stoi(s.substr(5)));
		}
		else if (s.find("pop") != string::npos) //pop ��ɾ����� �Ǵ�
		{
			stack.pop();
		}
		else if (s.find("size") != string::npos) //size ��ɾ����� �Ǵ�
		{
			stack.size();
		}
		else if (s.find("top") != string::npos)
		{
			stack.top();
		}
		else if (s.find("empty") != string::npos)
		{
			stack.empty();
		}
	}
	//����� ���
	stack.print();


	return 0;
}