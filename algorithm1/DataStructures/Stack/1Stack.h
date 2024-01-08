#include <iostream>
using namespace std;

/*
* Stack(����) �������
*/
//���� ó�� �Լ�
inline void error(const char* message)
{
	cout << message;
	exit(1);
}

const int MAX_STACK_SIZE = 20;
class ArrayStack {
	int top; //����� ����
	int data[MAX_STACK_SIZE]; //����� �迭

public:
	ArrayStack() { top = -1; } //���� ������ (ADT�� create() ����)
	~ArrayStack() {} //���� �Ҹ���
	bool isEmpty() { return top == -1; }
	bool isFull() { return top == MAX_STACK_SIZE; }

	void push(int e) { //�� ���� �׸� ����
		if (isFull()) error("���� ��ȭ ����");
		data[++top] = e;
	}

	int pop() { //�� ���� ��Ҹ� �����ϰ� ��ȯ
		if (isEmpty()) error("���� ���� ����");
		return data[top--];
	}

	int peek() {
		if (isEmpty()) error("���� ���� ����");
		return data[top];
	}

	void display() { //���� ������ ȭ�鿡 ���
		cout << "[���� �׸��� ��] = " << top + 1 << "\n";
		for (int i = 0; i <= top; i++)
		{
			cout << data[i] << " ";
		}
		cout << "\n";
	}
};
