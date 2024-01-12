#include <iostream>
#include <vector>
#include <string>
using namespace std;

int priorityQueue(int n, int m)
{
	int answer = 0;//출력
	int wonder = m; //궁금한 문서의 현재 인덱스 값;
	vector<int> priority; // n(N)개 문서의 중요도가 차례로 주어진 벡터
	for (int i = 0; i < n; i++)
	{
		int p;
		cin >> p;
		priority.push_back(p);
	}

	while (wonder != -1) //wonder 인덱스의 원소가 pop 되기 전까지
	{
		int a = priority.front();
		int max = 0;
		int newmaxIndex = 0;
		for (int i = 0; i < priority.size(); i++) //현재 priority vector 에서 가장 큰 중요도를 가진 값을 찾음
		{
			if (priority[i] > max) {
				max = priority[i];
				newmaxIndex = i;
			}
		}
		if (newmaxIndex == 0) //0번째 인덱스 원소의 값이 가장 큰 중요도를 가진 경우
		{
			priority.erase(priority.begin());
			answer++;
			wonder--;

		}
		else //0을 제외한 인덱스 원소의 값이 가장 큰 중요도를 가진 경우
		{
			priority.erase(priority.begin());
			priority.push_back(a);
			if (wonder != 0)
				wonder--;
			else //wonder == 0인 경우 && wonder의 원소 값보다 큰 중요도를 가진 원소가 다른 인덱스에 존재할 경우
			{
				wonder += priority.size() - 1;
			}
		}

	}
	return answer;

}
int main() {
	int testCase;
	int N, M; 
	/*
	* N : 문서의 개수
	* M : 몇 번째로 인쇄되었는지 궁금한 문서가 현재 Queue에서 몇 번째에 놓여있는지 나타내는 정수
	*/
	cin >> testCase;
	string ans="";
	for (int i = 0; i < testCase; i++)
	{
		cin >> N >> M;
		ans += to_string(priorityQueue(N, M));
		if (i < testCase - 1)
			ans += "\n";
	}
	cout << ans;
	return 0;
}