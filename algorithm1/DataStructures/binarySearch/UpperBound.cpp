#include <iostream>
#include <string>
using namespace std;

int main() {
	//���ĵ� �迭
	int arr[] = { 1, 2, 3, 3, 3, 4, 4, 5, 6, 7, 7, 7, 8, 8, 9 };
	int left = 0, right = sizeof(arr) / sizeof(int);

	int search;
	cin >> search;
	while (left < right) {
		int mid = (left + right) / 2;
		if (arr[mid] <= search)
			left = mid + 1;
		else if (arr[mid] > search)
			right = mid;


	}
	cout << "�ε��� " << right << "�� upperbound " << search << "���� �ֽ��ϴ�.";
	return 0;
}