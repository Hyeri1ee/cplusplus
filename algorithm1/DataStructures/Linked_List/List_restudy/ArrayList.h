//���ϸ� : ArrayList.h : �迭�� �̿��� ����Ʈ Ŭ���� ����
#include <iostream>
using namespace std;
#define MAX_SIZE 20; // ���� ��.

class ArrayList {
	int* data;
	int length;//���� ����� ����� ����
public:
	ArrayList() { length = 0; data = new int[20]; }

	//���� ���� : ����Ʈ�� pos��°�� �׸� e �߰�
	void insert(int pos, int e)
	{
		if (!isFull() && pos >= 0 && pos <= length)
		{
			
			for (int i = length; i > pos; i--)   // �� i = length ���� �����ϴ��� ���� �ȵ�
			{
				data[i] = data[i - 1];
			}
			
			data[pos] = e;
			length++;
		}
		else
			return;
		

	}
	//���� ���� : pos��°�� �׸��� ����Ʈ���� ����
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
	//pos��° �� ��ȯ
	int getEntry(int pos)
	{
		return data[pos];
	}
	//����ִ��� Ȯ��
	bool isEmpty() {
		return length == 0;
	}
	//�� �� �ִ��� Ȯ��
	bool isFull() {
		return length == 20;
	}
	//e�� �ִ��� Ȯ��
	bool find(int e)
	{
		for (int i = 0; i < length; i++)
		{
			if (data[i] == e)
				return true;
		}
		return false;
	}
	//��ü
	void replace(int pos, int e)
	{
		if (pos >= 0 && pos < length)
			data[pos] = e;
		return;
	}
	//���� ������ ��ȯ
	int size()
	{
		return length;
	}
	//��ü ���� ���
	void display() {
		cout << "�迭�� ������ ����Ʈ �׸� �� : " << length<<"\n";
		for (int i = 0; i < length; i++)
		{
			cout << data[i] << " ";
		}
		cout << "\n\n";
	}
	//��� ��� ����
	void clear() { length = 0; }
};
