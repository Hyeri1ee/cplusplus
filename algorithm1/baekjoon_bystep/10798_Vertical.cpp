#include <iostream>
using namespace std;

int main() {
	
	string str[5];
	for (int i = 0; i < 5; i++)
		cin >> str[i];

	for (int j = 0; j < 15; j++)
	{
		
		for (int i = 0 ;i < 5; i++)
		{
			if (j < str[i].length()) //이 조건을 생각하기에 힘들었음
				cout << str[i][j];
		}
	}

	return 0;
}