#include <iostream>
#include <vector>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N;
	vector<int>k;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int m;
		cin >> m;
		k.push_back(m);
	}
	for (int i = 0; i < N; i++)
	{
		int a[4] = { 0, }; //ÄõÅÍ, ´ÙÀÓ, ´ÏÄÌ, Æä´Ï °³¼ö

		while (k[i] >= 25)
		{
			k[i] -= 25;
			a[0]++;
		}
		while (k[i] >= 10)
		{
			k[i] -= 10;
			a[1]++;
		}
		while (k[i] >= 5)
		{
			k[i] -= 5;
			a[2]++;
		}
		while (k[i] >= 1)
		{
			k[i] -= 1;
			a[3]++;
		}
		cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << '\n';

		a[0] = 0;
		a[1] = 0;
		a[2] = 0;
		a[3] = 0;
	}
	return 0;
}