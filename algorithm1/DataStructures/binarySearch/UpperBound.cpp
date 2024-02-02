#include <iostream>
#include <string>
using namespace std;

int main() {
	//정렬된 배열
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
	cout << "인덱스 " << right << "에 upperbound " << search << "값이 있습니다.";
	return 0;
}