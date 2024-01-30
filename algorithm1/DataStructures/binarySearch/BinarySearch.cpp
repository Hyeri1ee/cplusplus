#include <iostream>
#include <vector>
using namespace std;

int main() {
	int s[10];
	cout << "10개의 원소를 입력하세요: \n";
	for (int i = 0; i < 10; i++) {
		cin >> s[i];
	}
	int find;
	cin >> find;
	int low = 0;
	int high = 9;
	int mid;
	
	bool found = false;
	while (!found) {
		mid = (low + high) / 2;
		if (s[mid] < find)
			low = mid + 1;
		else if (s[mid] > find)
			high = mid - 1;
		else
		{
			found = true;
		}
	}
	cout << find << " 는 s[" << mid << "]에 있습니다.";
	return 0;
}
