//2StudentStack.h //�л����� ���� Ŭ����
#include "2Student.h"
#include <iostream>
using namespace std;

//���� ó�� �Լ�
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
	StudentStack() { top = -1;  } //���� ������
	~StudentStack() {};
	bool isEmpty() { return top == -1; }
	bool isFull() { return top == MAX_STACK_SIZE; }

	void push(Student e) { //�� ���� �׸� ����
		if (isFull()) error("���� ��ȭ ����");
		data[++top] = e;
	}

	Student pop() { //�� ���� ��Ҹ� �����ϰ� ��ȯ
		if (isEmpty()) error("���� ���� ����");
		return data[top--];
	}

	Student peek() {
		if (isEmpty()) error("���� ���� ����");
		return data[top];
	}

	void display() { //���� ������ ȭ�鿡 ���
		cout << "[��ü �л� �׸��� ��] = " << top + 1 << "\n";
		for (int i = 0; i <= top; i++)
		{
			data[i].display();
		}
		cout << "\n";
	}
};