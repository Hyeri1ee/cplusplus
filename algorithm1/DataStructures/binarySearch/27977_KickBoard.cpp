#include <iostream>
#include <vector>
using namespace std;
/*
1. �����Ұ� �� �̻� ���� < ������ �����ҿ� �б� ���� �Ÿ� >
2. �����Ҹ� k�� �鸦��, �̿��� �����ҵ� ������ �Ÿ� �� ���� 'ū' �Ÿ�
*/
int main() {
	int L, N, K;
	cin >> L >> N >> K;
	vector<int> nvec;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		nvec.push_back(a);

	}
	int result;
	//1�� ��� �켱 ���
	result = L - nvec[nvec.size() - 1];
	//2�� ��� ���
	int low = 0, high = N-1;
	while (low < high) {

	}
	return 0;
}