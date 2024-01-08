//2StudentStack.h //학생정보 스택 클래스
#include "2Student.h"
#include <iostream>
using namespace std;

//오류 처리 함수
inline void error(const char* message)
{
	cout << message;
	exit(1);
}
const int MAX_STACK_SIZE = 100;

class StudentStack {
	int top;
	Student data[MAX_STACK_SIZE];

public:
	StudentStack() { top = -1;  } //스택 생성자
	~StudentStack() {};
	bool isEmpty() { return top == -1; }
	bool isFull() { return top == MAX_STACK_SIZE; }

	void push(Student e) { //맨 위에 항목 삽입
		if (isFull()) error("스택 포화 에러");
		data[++top] = e;
	}

	Student pop() { //맨 위의 요소를 삭제하고 반환
		if (isEmpty()) error("스택 공백 에러");
		return data[top--];
	}

	Student peek() {
		if (isEmpty()) error("스택 공백 에러");
		return data[top];
	}

	void display() { //스택 내용을 화면에 출력
		cout << "[전체 학생 항목의 수] = " << top + 1 << "\n";
		for (int i = 0; i <= top; i++)
		{
			data[i].display();
		}
		cout << "\n";
	}
};