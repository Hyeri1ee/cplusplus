#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int list[2000001];
int N,C,maxD,router,pre,ans;

void input() {
	cin >> N >> C;
	//����
	for (int i = 0; i < N; i++)
		cin >> list[i];
	sort(list, list + N);
	
}
void answer() {
	int l = 1, r = list[N-1] - list[0];//�ּ� �Ÿ�, �ִ� �Ÿ�

	while (l <= r) {
		int m = (l + r) / 2;
		router = 1;
		pre = list[0];

		for (int n = 1; n < N; n++) {//�ʿ��� ������ ���� ���ϱ� 
			if ((list[n] - pre) >= m) {
				router++;
				pre = list[n];
			}
		}

		if (router >= C) {//������ ���� ũ�� ������ �÷�����.
			l = m + 1;
			ans = (ans > m) ? ans : m;
		}
		else {//������ ���� ������ ������ �ٿ�����.
			r = m - 1;
		}
		
	}
	cout << ans;
}
int main() {
	input();
	answer();
	return 0;
}