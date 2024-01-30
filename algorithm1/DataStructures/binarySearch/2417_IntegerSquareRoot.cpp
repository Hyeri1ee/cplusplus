#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long long  n;
	cin >> n;
	long long q = sqrt(n);
	if (q * q < n)
		q++;
	cout << q;

	return 0;
}