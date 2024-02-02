#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int N, M;
int* nvec = NULL;
int* mvec = NULL;
string ans = "";
template<typename T>
T lower_bound(T& end, const T& key) {

	int l = 0, r = end;
	while (l < r) {
		int mid = (l + r) / 2;
		if (nvec[mid] < key) {
			l = mid + 1;

		}
		else if (nvec[mid] > key){
			r = mid - 1;
		}
		else {//���� ����϶�
			l = mid;
			while (nvec[l] == key) {
				l--;
			}
			break;
		}
	}
	if (nvec[l] != key && l == 0)
		return -1;
	return l;//���� �ε��� ��ȯ
}


void input() {
	cin >> N;
	nvec = new int[N];
	for (int i = 0; i < N; i++)
		cin >> nvec[i];
	cin >> M;
	mvec = new int[M];
	for (int i = 0; i < M; i++)
		cin >> mvec[i];
	//nvec �迭 �������� ����
	sort(nvec, nvec + N);
}
void solve() {
	int order = 0;
	int low = 0, high = N - 1;
	int msave = M;
	while (1) {
		int search = mvec[order];
		//�̺� Ž��
		
		int k = lower_bound(high, search);
		if (k == -1)
			ans += "0 ";
		else
		{//���ʷ� search ���� �����ϴ� nvec �迭������ �ε��� ��ȣ ã��
			int count = 0;
			while (nvec[k] == search)
			{
				k++;
				count++;
			}
			
			ans += to_string(count);
			

		}
		if (order == msave - 1)
			break;
		ans += ' ';
		order++;
	}

}
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	input();
	solve();
	cout << ans;
	return 0;
}