//(BOJ)27977
#include <iostream>
#include <vector>
#define MAX_N 100001
using namespace std;

int list[MAX_N];
int L, N, K, maxDis;
void input() {
    cin >> L >> N >> K;

    int pre = 0;
    for (int i = 0; i < N; i++) {
        cin >> list[i];
        maxDis = max(maxDis, list[i] - pre);
        pre = list[i];
    }
    maxDis = max(maxDis, L - pre);
    list[N++] = L;
}
void func() {
    int l = maxDis;
    int r = L;

    int ret = 0;
    while (l <= r) {
        int m = (l + r) / 2;

        int now = m;//ó�� ���� ���� ����
        int pos = 0;
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            if (list[i] - pos > now) {//�� �� �ֳ�
                cnt++;
                now = m;
            }
            now -= (list[i] - pos);//��������
            pos = list[i];//���� ��ġ
        }

        if (cnt <= K) {//���� �ٽ� ä�� Ƚ���� K�����̳� -> �׷��ٸ�, �� ���� ���� ���� �����ϳ�
            ret = m;
            r = m - 1;
        }
        else {//�� ū ���� ���Ͱ� �ʿ���
            l = m + 1;
        }
    }

    cout << ret << '\n';
}
int main() {
	input();
	func();
	return 0;
}