#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
* 그룹 단어 : 한 단어열에서 특정 문자가 연속해서만 나타나야하는 단어
* vector 로 문자열을 n개 받고
* 그룹 단어 세어 결과값 반환하는 함수 -> consider
* 그룹 단어 여부 판단 함수 -> isGroupWord
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

	//ch에서 중복된 문자 존재하면 return false, 아니면 return true
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
int consider(vector<string>& v) //그룹 단어 수 세는 함수
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