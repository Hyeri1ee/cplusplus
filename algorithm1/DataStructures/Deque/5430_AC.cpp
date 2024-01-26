#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>
using namespace std;
void toVector(deque<int>& vec, string& arraystring)
{
	size_t indexStart = 1;
	size_t indexEnd;
	while (1)
	{
		size_t indexEnd = arraystring.find(',',indexStart);
		if (indexEnd == string::npos)
			break;

		int num = stoi(arraystring.substr(indexStart, indexEnd - indexStart + 1));
		vec.push_back(num);
		indexStart = indexEnd + 1;
	}
	indexEnd = arraystring.find(']');
	int num = stoi(arraystring.substr(indexStart, indexEnd - indexStart));
	vec.push_back(num);
	/*for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";*/
}
void doFunction(deque<int>& vec, string& function)
{
	bool bo = false;
	for (int i = 0; i < function.length(); i++)
	{
		char c = function[i];
		if (c == 'R')
			reverse(vec.begin(), vec.begin() + vec.size());
		else if (c == 'D' && vec.size() != 0) {
			vec.pop_front();
		}
		else
		{
			bo = true;
			break;
		}

	}
	if (!bo)
	{
		string re = "[";
		for (int i = 0; i < vec.size(); i++)
		{
			re += to_string(vec[i]);
			if (i != vec.size() - 1)
				re += ",";
			else //마지막 원소
			{
				re += "]\n";
			}
		}
		if (vec.size() == 0)
			re += "]\n";
		cout << re;
	}
	else
	{
		cout << "error\n";
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		string function;
		cin >> function;

		int n; //배열에 들어있는 수의 개수 n
		cin >> n;
		string arraystring;
		cin >> arraystring;
		if (n != 0)
		{
			deque<int> vec;
			toVector(vec, arraystring);
			doFunction(vec, function);
		}
		else
			cout << "error\n";
	
	}
	return 0;
}