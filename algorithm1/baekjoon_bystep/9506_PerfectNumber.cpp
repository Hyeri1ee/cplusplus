#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int> v; //�׽�Ʈ���̽� ��� ����
	while (1)
	{
		int n;
		cin >> n;
		if (n == -1)
			break;
		v.push_back(n);
	}
	
	
	for (int i = 0; i < v.size(); i++)
	{
		vector<int> fs;
		int factorSum = 0;
		int num = v[i];
		string s = to_string(num)+" =";
		for (int j = 1; j < num; j++)
		{
			if (num % j == 0)
			{
				fs.push_back(j);
				factorSum += j;
				s += " " + to_string(j);
				s += " +";
			}
		}
		s.erase(std::prev(s.end())); //������ ���� ����
		if (num == factorSum)
			cout << s << '\n';
		else
			cout << num << " is NOT perfect.\n";
	}
	return 0;
}