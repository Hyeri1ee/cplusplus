#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int A, B, V;
	//int Current = 0;
	int Day = 1;
	cin >> A >> B >> V;

	//���� ���
	Day += (V - A) / (A - B);
	if (((V - A) % (A - B)) != 0)
		Day++;//������ �ö�
	cout << Day;

	//�Ʒ� �ݺ��� ����ϸ� �ð��ʰ� �߻�
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