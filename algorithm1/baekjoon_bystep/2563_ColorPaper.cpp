#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//모눈종이 이용
void checkColor(int a, int b, int** v)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			v[a + i][b + j] = 1;
		}
	}
}
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	int** color = new int* [100];
	for (int i = 0; i < 100; i++)
	{
		color[i] = new int[100];
		fill(color[i], color[i] + 100, 0);
	}
	int answer = 0;

	cin >> n;


	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;

		checkColor(a, b, color);
	}

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
			if (color[i][j] == 1)
				answer += 1;
	}
	cout << answer;


	
	
	
	return 0;
}