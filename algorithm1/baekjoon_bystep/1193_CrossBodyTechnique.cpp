#include <iostream>
#include <string>
using namespace std;
int main() {
	int N;
	cin >> N;

	int i = 0;
	int j = 1;
	
	while (i < N)
	{
		i += j;
		j++;

	}
	j--; //�� ��° �밢������ �˾Ƴ�
	i -= j;
	int k = N - i; //Ư�� �밢�� ���� ���°���� �˾Ƴ�
	string s = ""; //�����
	//cout << j << "  :  " << k;
	if (j % 2 == 0) //¦���� ���
	{
		s += to_string(k);
		s += "/";
		s += to_string(j-k+1);
	}
	else //Ȧ���� ���
	{
		s += to_string(j - k+1);
		s += "/";
		s += to_string(k);
	}
	cout << s;
	return 0;
}