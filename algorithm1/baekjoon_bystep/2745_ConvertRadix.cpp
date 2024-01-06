#include <iostream>
#include <math.h>
using namespace std;
/*
* <B진법 수 N -> 10진법 수로 출력>
* 아스키코드 활용
*/
int main() {

	string s; int N;
	int answer= 0 ;
	cin >> s >> N;


	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (s[i] >= 48 && s[i] <= 57)
			answer += pow(N,s.length() - 1 - i) * (s[i] - 48); //s[i]-'0'
		else //알파벳인 경우
			answer += pow(N, s.length() - 1 - i) * (s[i] - 55); //s[i] - 'A' + 10

	}
	cout << answer;
	return 0;
}