//파일명 : ArrayList.h : 배열을 이용한 리스트 클래스 구현
#include <iostream>
using namespace std;
#define MAX_SIZE 20; // 오류 남.

class ArrayList {
	int* data;
	int length;//현재 저장된 요소의 개수
public:
	ArrayList() { length = 0; data = new int[20]; }

	//삽입 연산 : 리스트의 pos번째에 항목 e 추가
	void insert(int pos, int e)
	{
		if (!isFull() && pos >= 0 && pos <= length)
		{
			
			for (int i = length; i > pos; i--)   // 왜 i = length 부터 시작하는지 이해 안됨
			{
				data[i] = data[i - 1];
			}
			
			data[pos] = e;
			length++;
		}
		else
			return;
		

	}
	//삭제 연산 : pos번째에 항목을 리스트에서 제거
	void remove(int pos)
	{
		if (!isEmpty() && pos >= 0 && pos < length)
		{
			for (int i = pos+1; i < length; i++)
			{
				data[i-1] = data[i];
			}
			length--;
		}
		else
			return;
	}
	//pos번째 값 반환
	int getEntry(int pos)
	{
		return data[pos];
	}
	//비어있는지 확인
	bool isEmpty() {
		return length == 0;
	}
	//꽉 차 있는지 확인
	bool isFull() {
		return length == 20;
	}
	//e가 있는지 확인
	bool find(int e)
	{
		for (int i = 0; i < length; i++)
		{
			if (data[i] == e)
				return true;
		}
		return false;
	}
	//대체
	void replace(int pos, int e)
	{
		if (pos >= 0 && pos < length)
			data[pos] = e;
		return;
	}
	//현재 사이즈 반환
	int size()
	{
		return length;
	}
	//전체 값들 출력
	void display() {
		cout << "배열로 구현한 리스트 항목 수 : " << length<<"\n";
		for (int i = 0; i < length; i++)
		{
			cout << data[i] << " ";
		}
		cout << "\n\n";
	}
	//모든 요소 제거
	void clear() { length = 0; }
};
