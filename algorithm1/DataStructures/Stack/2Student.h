//2Studnet.h : �л� ������ ��Ÿ���� Ŭ����
#include <iostream>
#include <string>
#include <cstring> // Include the header for string manipulation functions
using namespace std;

#define MAX_STRING 100
class Student {
    int id; //�й�
    char name[MAX_STRING]; //�̸�
    char dept[MAX_STRING]; //�Ҽ� �а�

public:
    Student(int i=0, const char* n="", const char* d="") { set(i, n, d); }
    void set(int i, const char* n, const char* d) {
        id = i;
        strncpy(name, n, MAX_STRING - 1);
        name[MAX_STRING - 1] = '\0'; // Ensure null-termination
        strncpy(dept, d, MAX_STRING - 1);
        dept[MAX_STRING - 1] = '\0'; // Ensure null-termination
    }

    void display()
    {
        cout << "�й�: " << id << "\t����: " << name << "\t�а�: " << dept << "\n";
    }
};
