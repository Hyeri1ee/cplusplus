#include <iostream>
#include <string>
using namespace std;
/*
* string�� ���̰� Ȧ���� ��� 
* ��� ������ �ε��� k ���� �����Ͽ� for������ 
  arr[k-i] == arr[k+i]���� Ȯ���� i++ �Ͽ� �ѹ��̶� �ƴϸ� ���߰� 0�� ����Ѵ�.
* string�� ���̰� ¦���� ���
* string ���� �� = k �� �Ͽ� for������
  arr[k-i] == arr[k+1+i]���� Ȯ���� i++�Ͽ� �Ȱ��� �����Ѵ�.
*/
int main() {
	string s;
	int k;
	int i = 0;
	cin >> s;
	if (s.length() % 2 != 0) //s ���̰� Ȧ���� ���
	{
		k = s.length() / 2;
		while (k - i >= 0)
		{
			if (s[k - i] != s[k + i]) {
				cout << "0";
				break;
			}
			else {
				i++;
				continue;
			}
		}
		if (k - i < 0)
			cout << "1";
	}
	else //s ���̰� ¦���� ���
	{
		k = s.length() / 2 - 1;
		while (k - i >= 0)
		{
			if (s[k - i] != s[k + 1 + i]) {
				cout << "0";
				break;
			}
			else
			{
				i++;
				continue;
			}
		}
		if (k - i < 0)
			cout << "1";
	}
	
		
	return 0;
}