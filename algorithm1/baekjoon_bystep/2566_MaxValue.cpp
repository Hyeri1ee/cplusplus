#include <iostream>
using namespace std;
int main() {
	int k[9][9];
	int n =1, m = 1;
	int max = 0;	
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++) {
			cin >> k[i][j];
			if (max < k[i][j]) {
				max = k[i][j];
				n = i; m = j;
			}
		}
	cout << max << endl;
	cout << n+1 << " " << m+1;
	return 0;
}