#include "1CircularQueue.h"

void main() {
	CircularQueue s;
	for (int i = 1; i < 10; i++)
	{
		s.enqueue(i);
	}
	s.display();
	s.dequeue();
	s.dequeue();
	s.dequeue();
	s.dequeue();
	s.display();

	return;
}