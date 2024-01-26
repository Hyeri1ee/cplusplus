#pragma once
#include <iostream>
#define MAX_LIST_SIZE 100;
using namespace std;

template <typename T>
class ArrayList {
	T* data;//실제 항목 값들이 들어감
	int bufferSize;//data의 사이즈
	int length; //현재 리스트 내의 항목들의 개수
public:
	
	ArrayList(int bufferSize)
	{
		this->bufferSize = bufferSize;
		length = 0;
		data = new int[bufferSize];
	}
	//삽입 연산
	void insert(int pos, int e){
		if (!isFull() && pos >= 0 && pos <= length)
		{
			for (int i = length; i > pos; i--)
				data[i] = data[i - 1];
			data[pos] = e;
			length++;
		}
		else
			cout << "포화상태 오류 또는 삽입 위치 오류\n";
	}
	//삭제 연산
	void remove(int pos) {
		if (!isEmpty() && 0 <= pos && pos <= length)
		{
			for (int i = pos + 1; i < length; i++)
				data[i - 1] = data[i];
			length--;
		}
		else
			cout << "공백상태 오류 또는 삭제 위치 오류\n";
	}

	int getEntry(int pos) { return data[pos]; }//pos번째 항목을 반환
	bool isEmpty() { return length == 0; }//공백 상태 검사
	bool isFull() { return length == MAX_LIST_SIZE; }//포화 상태 검사

	bool find(int item) {//item 항목이 있는지 검사
		for (int i = 0; i < length; i++)
			if (data[i] == item) return true;
		return false;
	}

	void replace(int pos, int e) {//pos 위치의 요소 변경
		data[pos] = e;
	}
	int size() { return length; }//리스트의 길이 반환
	void display() {
		cout << "배열로 구현한 리스트 전체 항목수 : " << size() << "\n";
		for (int i = 0; i < length; i++)
			cout << data[i] << " ";
		cout << "\n";
	}
	void clear() { //모든 요소 제거
		length = 0;
	}
};