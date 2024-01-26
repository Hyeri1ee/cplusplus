#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
	int count = 0;
	int index = -1;
	int n, m;
	cin >> n >> m;
	int size = m;
	deque<int> deq;
	for (int i = 1; i <= n; i++)
		deq.push_back(i);
	//m개의 int를 vector에 담기
	vector<int> vec;
	for (int i = 1; i <= m; i++)
	{
		int input;
		cin >> input;
		vec.push_back(input);
	}

	while (m--)
	{
		int search = vec.at(vec.size() - m - 1);
		for (int i = 1; i <= deq.size(); i++)
		{
			if (search == deq[i - 1])
			{
				index = i - 1;
				break;
			}
		}

		if (index <= deq.size() - index) //2번째 연산
		{
			while (index--) {
				int front = deq.front();
				deq.erase(deq.begin());
				deq.push_back(front);
				count++;
			}
		}
		else if (index > deq.size() - index){//3번째 연산
			int index2 = deq.size() - index;
			while (index2--) {
				int rear = deq[deq.size() - 1];
				deq.pop_back();
				deq.insert(deq.begin(), rear);
				count++;
			}
		}


		deq.erase(deq.begin());
		

	}
	cout << count;
	return 0;
}