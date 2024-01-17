#include <iostream>
#define MAX_QUEUE_SIZE 100
using namespace std;

class CircularQueue {
protected:
	int front, rear;
	// front : 큐의 첫 번째 요소의 하나 앞
	// rear : 큐의 마지막 요소
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
	int dequeue() { // 첫 항목을 queue에서 빼서 반환
		if (!isEmpty())
		{
			front = (front + 1) % MAX_QUEUE_SIZE;
			return data[front];
		}
	}
	int peek() // 첫 항목을 단순 반환
	{
		if (!isEmpty())
		{
			return data[(front + 1) % MAX_QUEUE_SIZE];
		}
	}
	void display()
	{
		cout << "[큐 요소 출력]" << "\n";
		int max = (front < rear) ? rear : rear + MAX_QUEUE_SIZE;
		for (int i = front + 1 ; i <= max; i++)
		{
			cout << "[" << i << "]번째 요소: " << data[i % MAX_QUEUE_SIZE]<<"\n";
		}
	}


};
