/*
* swap function - pass by reference
*/
#include <iostream>
using namespace std;

void swap(int& first, int& second);

int main() {
	int first = 10;
	int second = 20;
	swap(first, second);

	cout << "Value of first in main:" << first << endl;
	cout << "Value of second in main:" << second;

}
void swap(int& fst, int& snd)
{
	int temp = fst;
	fst = snd;
	snd = temp;
	return;
}