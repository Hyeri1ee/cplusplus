#include <iostream>
using namespace std;
/*
* absent[30] 배열을 0으로 초기화하고
* for문으로 28번
* 제출자의 출석번호를 받아 absent의 인덱스번호로 할당하여
* absent[i] = 1로 바꾼다.
* absent를 인덱스 오름차순으로 훑는데 1이면 출력한다.
*/
int main() {
	int absent[30] = { 0 };
	int k;
	
	for (int i = 0; i < 28; i++)
	{
		cin >> k;
		absent[k-1] = 1;
	}

	for (int i = 0; i < 30; i++)
		if (absent[i] == 0)
			cout << i+1 << endl;
	return 0;
}