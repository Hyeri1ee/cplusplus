#include <iostream>
using namespace std;
/*
* 1 : 1 
* 2~7 : 2 (6 X 1) 
* 8~19 : 3 (12 X 2)
* 20~37 : 4 (18 X 3)
* 38~61 : 5 (24 X 4)
*/
int main() {
	int N;
	cin >> N;

	int cnt = 0;
	int i = 0;
	int answer = 0;
	
	while (N >= 1)
	{
		N -= 6;
		cnt++;
	}
	
	while (cnt > 0)
	{
		i++;
		cnt -= i;	
		answer++;
	}
	if (N != 1)
		cout << answer + 1;
	cout << answer;
	return 0;
}