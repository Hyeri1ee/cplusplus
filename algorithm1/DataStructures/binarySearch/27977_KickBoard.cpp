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

        int now = m;//처음 가진 통의 리터
        int pos = 0;
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            if (list[i] - pos > now) {//갈 수 있냐
                cnt++;
                now = m;
            }
            now -= (list[i] - pos);//움직였다
            pos = list[i];//현재 위치
        }

        if (cnt <= K) {//통을 다시 채운 횟수가 K이하이냐 -> 그렇다면, 더 적은 통의 리터 가능하냐
            ret = m;
            r = m - 1;
        }
        else {//더 큰 통의 리터가 필요함
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