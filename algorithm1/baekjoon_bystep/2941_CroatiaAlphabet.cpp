#include <iostream>
#include <string>
using namespace std;
/*
* ���õ� 9���� ũ�ξ�Ƽ�� ���ĺ� ���� ������ ���ĺ��� ���������� ���� �ʹ�.
* = �� ���� ���� dz=�� ��� (-2) �̸� �����ϰ� (-1)
* - �� ���� ���� ������ (-1)
* 
*/
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	int n = s.length();
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] == '-')
			n -= 1;
		if (s[i] == 'j' && (s[i - 1] == 'l' || s[i - 1] == 'n'))
			n -= 1;
		if (s[i] == '=')
		{
			if (i - 2 >= 0) {
				if (s[i - 1] == 'z' && s[i - 2] == 'd')
					n -= 2;
				else
					n -= 1;
			}
			else
				n -= 1;
		}
	}

	cout << n;
	return 0;
}