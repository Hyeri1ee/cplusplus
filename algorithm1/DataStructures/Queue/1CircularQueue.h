#include <iostream>
#define MAX_QUEUE_SIZE 100
using namespace std;

class CircularQueue {
protected:
	int front, rear;
	// front : ť�� ù ��° ����� �ϳ� ��
	// rear : ť�� ������ ���
	int data[MAX_QUEUE_SIZE];
public:
	CircularQueue() { front = rear = 0; }
	bool isEmpty() { return front == rear; }
	bool isFull() { return (rear + 1) % MAX_QUEUE_SIZE == front; }
	void enqueue(int val)
	{
		if (!isFull())
		{
			rear = (rear + 1) % MAX_QUEUE_SIZE;
			data[rear] = val;
		}
	}
	int dequeue() { // ù �׸��� queue���� ���� ��ȯ
		if (!isEmpty())
		{
			front = (front + 1) % MAX_QUEUE_SIZE;
			return data[front];
		}
	}
	int peek() // ù �׸��� �ܼ� ��ȯ
	{
		if (!isEmpty())
		{
			return data[(front + 1) % MAX_QUEUE_SIZE];
		}
	}
	void display()
	{
		cout << "[ť ��� ���]" << "\n";
		int max = (front < rear) ? rear : rear + MAX_QUEUE_SIZE;
		for (int i = front + 1 ; i <= max; i++)
		{
			cout << "[" << i << "]��° ���: " << data[i % MAX_QUEUE_SIZE]<<"\n";
		}
	}


};
