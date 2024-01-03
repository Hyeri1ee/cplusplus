#include <iostream>
#include <string>
#include <climits>
using namespace std;
/*
* alphabet[26] 배열은 소문자, 대문자 구분안한 알파벳 각각의 개수
* A = 65 (아스키코드)를 이용, a = A + 32 임을 이용
* 문자열 각각의 문자 하나씩 보면서 alphabet 의 값을 증가시킴
* 
* alphabet에서 가장 큰 값 중복 없이 찾은 경우,
* 큰 값의 인덱스 값 + 65 한 char 문자를 출력
* alphabet에서 가장 큰 값에서 중복이 있었다면,
* ? 출력
*/
int main() {
	int alphabet[26] = { 0, };
	string s;
	int max = INT_MIN;
	int check = 0;//?만 출력하기 위한 flag
	int maxIndex = -1;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		int k = s[i] - 'A'; //문자를 아스키코드 표를 참고해 10진수로 바꿈
		if (k >= 32) //문자가 소문자인 경우, 대문자와 같은 취급하도록 32를 더 빼줌
			k -= 32;
		if (k>=0 && k<26)
			alphabet[k] += 1; //문자의 개수를 증가시켜 개수 세기
	}

	for (int i = 0; i < 26; i++)
	{
		if (max < alphabet[i]) {
			max = alphabet[i];
			maxIndex = i;
			check = 0;
		}
		else if (max == alphabet[i])
		{
			check = 1;
		}
		
	}
	char a = (check == 0) ? char(maxIndex + 65) : '?';
	cout << a;

	return 0;
}