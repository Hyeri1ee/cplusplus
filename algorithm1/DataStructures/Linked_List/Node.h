//�ܼ� ���� ����Ʈ�� �̿��� ���� ����
#include <iostream>
using namespace std;

class Node
{
private:
	int item;
	Node* link;
public:
	Node(int i)
	{
		item = i;
		link = NULL;
	}
	~Node(void) {};
	Node* getLink()
	{
		return link;
	};
	void setLink(Node* p)
	{
		link = p;
	};
};
