#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int N, M;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	//arr ����
	sort(arr, arr + N);

	cin >> M;
	int* find = new int[M];
	for (int i = 0; i < M; i++) {
		cin >> find[i];
	}

	//�̺� Ž��
	vector<int> ans;
	
	int mid;
	for (int j = 0 ; j < M; j++){
		bool found = false;
		int low = 0;
		int high = N - 1;

		int search = find[j];

		while (low <= high) {//low == high �� ��쿡, ã�� ���� �����Ƿ�, ���Խ��Ѿ���.
			
			mid = (low + high) / 2;
			if (arr[mid] < search)
				low = mid + 1;
			else if (arr[mid] > search)
				high = mid - 1;
			else {
				found = true;
				break;
			}
				
		}
		if (found)
			ans.push_back(1);
		else
			ans.push_back(0);

	}
	//���
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << '\n';
	return 0;
}