#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int A, B, V;
	//int Current = 0;
	int Day = 1;
	cin >> A >> B >> V;

	//직접 계산
	Day += (V - A) / (A - B);
	if (((V - A) % (A - B)) != 0)
		Day++;//다음날 올라감
	cout << Day;

	//아래 반복문 사용하면 시간초과 발생
	/*while (Current < V)
	{
		Day++;
		Current += A;
		if (Current >= V)
			break;
		Current -= B;
		
	}*/
	//cout << Day;
	return 0;
}