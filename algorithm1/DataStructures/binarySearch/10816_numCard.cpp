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
		else {//같은 경우일때
			l = mid;
			while (nvec[l] == key) {
				l--;
			}
			break;
		}
	}
	if (nvec[l] != key && l == 0)
		return -1;
	return l;//값의 인덱스 반환
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
	//nvec 배열 오름차순 나열
	sort(nvec, nvec + N);
}
void solve() {
	int order = 0;
	int low = 0, high = N - 1;
	int msave = M;
	while (1) {
		int search = mvec[order];
		//이분 탐색
		
		int k = lower_bound(high, search);
		if (k == -1)
			ans += "0 ";
		else
		{//최초로 search 값이 등장하는 nvec 배열에서의 인덱스 번호 찾음
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