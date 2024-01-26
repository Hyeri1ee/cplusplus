#pragma once
#include <iostream>
#define MAX_LIST_SIZE 100;
using namespace std;

template <typename T>
class ArrayList {
	T* data;//���� �׸� ������ ��
	int bufferSize;//data�� ������
	int length; //���� ����Ʈ ���� �׸���� ����
public:
	
	ArrayList(int bufferSize)
	{
		this->bufferSize = bufferSize;
		length = 0;
		data = new int[bufferSize];
	}
	//���� ����
	void insert(int pos, int e){
		if (!isFull() && pos >= 0 && pos <= length)
		{
			for (int i = length; i > pos; i--)
				data[i] = data[i - 1];
			data[pos] = e;
			length++;
		}
		else
			cout << "��ȭ���� ���� �Ǵ� ���� ��ġ ����\n";
	}
	//���� ����
	void remove(int pos) {
		if (!isEmpty() && 0 <= pos && pos <= length)
		{
			for (int i = pos + 1; i < length; i++)
				data[i - 1] = data[i];
			length--;
		}
		else
			cout << "������� ���� �Ǵ� ���� ��ġ ����\n";
	}

	int getEntry(int pos) { return data[pos]; }//pos��° �׸��� ��ȯ
	bool isEmpty() { return length == 0; }//���� ���� �˻�
	bool isFull() { return length == MAX_LIST_SIZE; }//��ȭ ���� �˻�

	bool find(int item) {//item �׸��� �ִ��� �˻�
		for (int i = 0; i < length; i++)
			if (data[i] == item) return true;
		return false;
	}

	void replace(int pos, int e) {//pos ��ġ�� ��� ����
		data[pos] = e;
	}
	int size() { return length; }//����Ʈ�� ���� ��ȯ
	void display() {
		cout << "�迭�� ������ ����Ʈ ��ü �׸�� : " << size() << "\n";
		for (int i = 0; i < length; i++)
			cout << data[i] << " ";
		cout << "\n";
	}
	void clear() { //��� ��� ����
		length = 0;
	}
};