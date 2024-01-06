#include <iostream>
using namespace std;

int main() {
	int s; int N;
	cin >> s >> N;
	string answer1="", answer2="", answer;

	while (s >= N) //등호 중요
	{
		int right;
		
		right = s % N;
		s = s / N;

		if (right >= 10) {
			right -= 10;
			right += 'A';
		}
		else
		{
			right += '0';
		}
		answer1 += right;
		answer = answer1 + answer2;
	
		answer2 = answer;
		answer1 = "";
	
	}
	if (s >= 10)
	{
		s -= 10;
		s += 'A';
	}
	else
	{
		s += '0';
	}
	answer1 += s; answer = answer1 + answer2;

	cout << answer;
	return 0;
}