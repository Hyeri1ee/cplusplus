//2StudentStack.cpp : StudentStack �׽�Ʈ ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include "2StudentStack.h"
int main() {
	StudentStack stack;
	stack.push(Student(201513007, "ȫ�浿", "��ǻ�Ͱ��а�"));
	stack.push(Student(201513010, "�̼���", "�����а�"));
	stack.push(Student(201513013, "Ȳ��", "���а�"));
	stack.display();
	stack.pop();
	stack.display();
	return 0;
}