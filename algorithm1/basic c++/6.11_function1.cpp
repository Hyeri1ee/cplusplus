/*
* a value-returning function with parameters
*/
#include <iostream>
using namespace std;

int larger(int fst, int snd)
{
	int max;
	if (fst > snd)
	{
		max = fst;
	}
	else
	{
		max = snd;
	}
	return max;
}

int main() {
	int first, second;

	cout << "Enter the first number:";
	cin >> first;
	cout << "Enter the second number:";
	cin >> second;

	cout << "Large:" << larger(first, second);
	return 0;
}