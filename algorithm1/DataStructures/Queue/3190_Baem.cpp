#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int changeDirection(vector<pair<int, char>>& direction, queue<pair<int, int>>& move,int x,int y)
{
	int plustime = 0;
	

	return plustime;
}
int main() {
	int N, K, L;
	vector <pair<int, int>> apple;
	vector < pair<int, char>> direction;
	cin >> N; //������ ũ��
	cin >> K; //����� ����
	
	int** map = new int* [N];
	for (int i = 0; i < N; i++)
		map[i] = new int[N];

	for (int i = 0; i < K; i++) //����� ��ġ �Է� 
	{
		int a, b; //a: ��, b: ��
		cin >> a >> b;
		apple.push_back(make_pair(a, b));
		map[a][b] = -1; //����� ������ -1�� ǥ��
	}
	int time = 0;
	int x= 0 , y = 0; //���� �Ӹ� ��ġ
	queue<pair<int, int>> move; //���� ����~����~�Ӹ� ��ġ ������� move �� push ��
	while (1) //���� �̵�
	{
		int plustime = changeDirection(direction,move,x,y);//x�� y�� �ٲ��ְ�, move���뵵 �ٲ��� ��, ����� �ð��� ��ȯ �Լ�
	}
	cin >> L; //���� ��ȯ Ƚ��
	for (int i = 0; i < L; i++) //���� ��ȯ ���� �Է�
	{
		int a; char b;
		cin >> a >> b;
		direction.push_back(make_pair(a, b));
	}
	
	


	//�޸� ����
	for (int i = 0; i < N; i++)
		delete[] map[i];
	delete[] map;
	return 0;
}