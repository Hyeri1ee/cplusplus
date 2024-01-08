//2StudentStack.cpp : StudentStack 테스트 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include "2StudentStack.h"
int main() {
	StudentStack stack;
	stack.push(Student(201513007, "홍길동", "컴퓨터공학과"));
	stack.push(Student(201513010, "이순신", "기계공학과"));
	stack.push(Student(201513013, "황희", "법학과"));
	stack.display();
	stack.pop();
	stack.display();
	return 0;
}