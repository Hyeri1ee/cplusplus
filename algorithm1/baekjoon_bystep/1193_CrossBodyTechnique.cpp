#include <iostream>
#include <string>
using namespace std;
int main() {
	int N;
	cin >> N;

	int i = 0;
	int j = 1;
	
	while (i < N)
	{
		i += j;
		j++;

	}
	j--; //몇 번째 대각선인지 알아냄
	i -= j;
	int k = N - i; //특정 대각선 줄의 몇번째인지 알아냄
	string s = ""; //결과물
	//cout << j << "  :  " << k;
	if (j % 2 == 0) //짝수인 경우
	{
		s += to_string(k);
		s += "/";
		s += to_string(j-k+1);
	}
	else //홀수인 경우
	{
		s += to_string(j - k+1);
		s += "/";
		s += to_string(k);
	}
	cout << s;
	return 0;
}