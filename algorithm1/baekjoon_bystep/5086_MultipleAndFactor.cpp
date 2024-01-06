#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <pair<int, int>> v;
	string s="";

	int a, b;
	while (1) {
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		v.push_back(make_pair(a, b));
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].first > v[i].second)
			if (v[i].first % v[i].second == 0)
				s += "multiple\n";
			else
				s += "neither\n";
		else
			if (v[i].second % v[i].first == 0)
				s += "factor\n";
			else
				s += "neither\n";
	}
	cout << s;

	return 0;
}