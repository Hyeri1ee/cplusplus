#include <iostream>
#include <string>
using namespace std;
/*
* string의 길이가 홀수인 경우 
* 가운데 문자의 인덱스 k 부터 시작하여 for문으로 
  arr[k-i] == arr[k+i]인지 확인후 i++ 하여 한번이라도 아니면 멈추고 0을 출력한다.
* string의 길이가 짝수인 경우
* string 길이 반 = k 라 하여 for문으로
  arr[k-i] == arr[k+1+i]인지 확인후 i++하여 똑같이 시행한다.
*/
int main() {
	string s;
	int k;
	int i = 0;
	cin >> s;
	if (s.length() % 2 != 0) //s 길이가 홀수인 경우
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
	else //s 길이가 짝수인 경우
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