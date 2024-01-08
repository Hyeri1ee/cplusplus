#include <iostream>
#include <vector>
#include <string>
#include <istream>
using namespace std;
class Stack {
	int to;
	int data[10000];
	//출력
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

	//입력 
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		string s;
		getline(cin,s,'\n');
		if (s.find("push") != string::npos) //push 명령어인지 판단
		{
			stack.push(stoi(s.substr(5)));
		}
		else if (s.find("pop") != string::npos) //pop 명령어인지 판단
		{
			stack.pop();
		}
		else if (s.find("size") != string::npos) //size 명령어인지 판단
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
	//결과값 출력
	stack.print();


	return 0;
}