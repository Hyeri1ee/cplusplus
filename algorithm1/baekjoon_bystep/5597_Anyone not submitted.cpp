#include <iostream>
using namespace std;
/*
* absent[30] �迭�� 0���� �ʱ�ȭ�ϰ�
* for������ 28��
* �������� �⼮��ȣ�� �޾� absent�� �ε�����ȣ�� �Ҵ��Ͽ�
* absent[i] = 1�� �ٲ۴�.
* absent�� �ε��� ������������ �ȴµ� 1�̸� ����Ѵ�.
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