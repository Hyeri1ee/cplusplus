#include <iostream>
#include <math.h>
using namespace std;
/*
* <B���� �� N -> 10���� ���� ���>
* �ƽ�Ű�ڵ� Ȱ��
*/
int main() {

	string s; int N;
	int answer= 0 ;
	cin >> s >> N;


	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (s[i] >= 48 && s[i] <= 57)
			answer += pow(N,s.length() - 1 - i) * (s[i] - 48); //s[i]-'0'
		else //���ĺ��� ���
			answer += pow(N, s.length() - 1 - i) * (s[i] - 55); //s[i] - 'A' + 10

	}
	cout << answer;
	return 0;
}