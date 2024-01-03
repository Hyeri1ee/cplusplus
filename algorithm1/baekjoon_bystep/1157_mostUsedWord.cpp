#include <iostream>
#include <string>
#include <climits>
using namespace std;
/*
* alphabet[26] �迭�� �ҹ���, �빮�� ���о��� ���ĺ� ������ ����
* A = 65 (�ƽ�Ű�ڵ�)�� �̿�, a = A + 32 ���� �̿�
* ���ڿ� ������ ���� �ϳ��� ���鼭 alphabet �� ���� ������Ŵ
* 
* alphabet���� ���� ū �� �ߺ� ���� ã�� ���,
* ū ���� �ε��� �� + 65 �� char ���ڸ� ���
* alphabet���� ���� ū ������ �ߺ��� �־��ٸ�,
* ? ���
*/
int main() {
	int alphabet[26] = { 0, };
	string s;
	int max = INT_MIN;
	int check = 0;//?�� ����ϱ� ���� flag
	int maxIndex = -1;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		int k = s[i] - 'A'; //���ڸ� �ƽ�Ű�ڵ� ǥ�� ������ 10������ �ٲ�
		if (k >= 32) //���ڰ� �ҹ����� ���, �빮�ڿ� ���� ����ϵ��� 32�� �� ����
			k -= 32;
		if (k>=0 && k<26)
			alphabet[k] += 1; //������ ������ �������� ���� ����
	}

	for (int i = 0; i < 26; i++)
	{
		if (max < alphabet[i]) {
			max = alphabet[i];
			maxIndex = i;
			check = 0;
		}
		else if (max == alphabet[i])
		{
			check = 1;
		}
		
	}
	char a = (check == 0) ? char(maxIndex + 65) : '?';
	cout << a;

	return 0;
}