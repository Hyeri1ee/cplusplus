//2Studnet.h : 학생 정보를 나타내는 클래스
#include <iostream>
#include <string>
#include <cstring> // Include the header for string manipulation functions
using namespace std;

#define MAX_STRING 100
class Student {
    int id; //학번
    char name[MAX_STRING]; //이름
    char dept[MAX_STRING]; //소속 학과

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
        cout << "학번: " << id << "\t성명: " << name << "\t학과: " << dept << "\n";
    }
};
