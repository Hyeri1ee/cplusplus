#include "1CircularQueue.h"

class CircularDeque : public CircularQueue {
public:
	CircularDeque() {};
	void addRear(int val) {
		enqueue(val);
	}
	int deleteFront() {
		return dequeue();
	}
	int getFront() {
		return peek();
	}
	void addFront(int val) {
		if (isFull())
		{
			cout << "error : ���� ��ȭ�����Դϴ�.\n";
			exit(1);
		}
		else
		{
			data[front] = val;
			front = (front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
		}
	}
	int deleteRear() {
		if (isEmpty())
		{
			cout << "error : ���� ��������Դϴ�.\n";
			exit(1);
		}
		else
		{
			int ret = data[rear];
			rear = (rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
			return ret;
		}
	}
	int getRear() {
		if (isEmpty())
		{
			cout << "error : ���� ��������Դϴ�.\n";
			exit(1);
		}
		else
			return data[rear];
	}
	void display() {
		cout << "���� ����\n";
		int maxi = (front < rear) ? rear : rear + MAX_QUEUE_SIZE;
		for (int i = front + 1; i <= maxi; i++)
			cout << data[i % MAX_QUEUE_SIZE] << " ";
		cout << "\n";
	}
};