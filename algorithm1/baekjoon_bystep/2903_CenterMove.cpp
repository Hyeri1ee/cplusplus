#include <iostream>
using namespace std;
/*
* N : 0   1  2   3
     4   9  25  81
     2   3   5   9
*/
int main() {
	int N; //과정 N번 거친후
	int m = 2;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		m += m - 1;
	}
	cout << m * m;
	return 0;
}