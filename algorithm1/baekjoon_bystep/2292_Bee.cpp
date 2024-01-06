#include <iostream>
using namespace std;
/*
* 1 : 1 
* 2~7 : 2 (6
* 8~19 : 3 (12
* 20~37 : 4 (18
* 38~61 : 5 (24
*/
int main() {
	int N;
	cin >> N;
	int i = 0;
	for (int sum = 2; sum <= N; i++)
		sum += 6 * i;
	if (N == 1) i = 1;
	cout << i;
	return 0;
}