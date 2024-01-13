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
	cin >> N; //보드의 크기
	cin >> K; //사과의 개수
	
	int** map = new int* [N];
	for (int i = 0; i < N; i++)
		map[i] = new int[N];

	for (int i = 0; i < K; i++) //사과의 위치 입력 
	{
		int a, b; //a: 행, b: 열
		cin >> a >> b;
		apple.push_back(make_pair(a, b));
		map[a][b] = -1; //사과가 있으면 -1로 표시
	}
	int time = 0;
	int x= 0 , y = 0; //뱀의 머리 위치
	queue<pair<int, int>> move; //뱀의 꼬리~몸통~머리 위치 순서대로 move 에 push 됨
	while (1) //뱀의 이동
	{
		int plustime = changeDirection(direction,move,x,y);//x와 y를 바꿔주고, move내용도 바꿔준 후, 진행된 시간을 반환 함수
	}
	cin >> L; //방향 변환 횟수
	for (int i = 0; i < L; i++) //방향 전환 정보 입력
	{
		int a; char b;
		cin >> a >> b;
		direction.push_back(make_pair(a, b));
	}
	
	


	//메모리 해제
	for (int i = 0; i < N; i++)
		delete[] map[i];
	delete[] map;
	return 0;
}