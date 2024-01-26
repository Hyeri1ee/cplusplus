#pragma once
#include "Node.h"
class LinkedStack
{
private:
	Node* top;
public:
	LinkedStack();
	~LinkedStack();
	void push(Node* p);
	Node* pop();
	Node* peek();
	bool isEmpty();

};
LinkedStack::LinkedStack() //생성자
{
	top = NULL;
}
LinkedStack::~LinkedStack()
{
	while (!isEmpty())
		delete pop();
}
void LinkedStack::push(Node* p)
{
	if (isEmpty())
		top = p;
	else
	{
		p->setLink(top);
		top = p;
	}
}
Node* LinkedStack::pop()
{
	if (isEmpty())
		return NULL;
	else
	{
		Node* p = top;
		top = p->getLink();//p가 가리키는 링크의 값을 반환해서 top에 넣어줌. top은 그 다음 노드를 가리키게 됩니다.
		return p;
	}
}
Node* LinkedStack::peek()
{
	if (isEmpty())
		return NULL;
	else
		return top;
}
bool LinkedStack::isEmpty()
{
	return top == NULL;
}