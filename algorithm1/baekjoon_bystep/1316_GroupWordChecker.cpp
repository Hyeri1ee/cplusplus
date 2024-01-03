#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
* �׷� �ܾ� : �� �ܾ���� Ư�� ���ڰ� �����ؼ��� ��Ÿ�����ϴ� �ܾ�
* vector �� ���ڿ��� n�� �ް�
* �׷� �ܾ� ���� ����� ��ȯ�ϴ� �Լ� -> consider
* �׷� �ܾ� ���� �Ǵ� �Լ� -> isGroupWord
*/
bool isGroupWord(string s)
{
	vector<char> ch; 
	ch.push_back(s[0]);
	for (int i = 1; i <= s.length() - 1; i++)
	{
		if (s[i] != s[i -1]) {
			ch.push_back(s[i]);
		}
	}

	//ch���� �ߺ��� ���� �����ϸ� return false, �ƴϸ� return true
	for (int i = 0; i < ch.size() - 1; i++)
	{
		for (int j = i+1; j < ch.size(); j++)
		{
			if (ch[i] == ch[j])
				return false;
		}
	}
	return true;
}
int consider(vector<string>& v) //�׷� �ܾ� �� ���� �Լ�
{
	int count = 0;
	string s;
	for (int i = 0; i < v.size(); i++)
	{
		s = v[i];
		if (isGroupWord(s))
			count++;
	}
	return count;
}
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		v.push_back(s);
	}
	cout << consider(v);

	return 0;
}