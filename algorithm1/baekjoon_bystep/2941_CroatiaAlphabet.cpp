#include <iostream>
#include <string>
using namespace std;
/*
* 제시된 9개의 크로아티아 알파벳 제외 나머지 알파벳은 정상적으로 세는 것다.
* = 이 붙은 것은 dz=인 경우 (-2) 이를 제외하고 (-1)
* - 이 붙은 것은 언제나 (-1)
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