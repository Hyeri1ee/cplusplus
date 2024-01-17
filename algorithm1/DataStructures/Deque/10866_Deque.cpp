/*
 * array�� �̿��Ͽ� Circular Deque ����
 */
#include <iostream>
#include <istream>
#include <string>
using namespace std;


class Deque {
private:
    int MAX_DEQUE_SIZE;
    int front;  // ù��° ��� ���� index
    int rear;   // ������ ��� index
    int* data;

public:
    Deque(int N) {
        MAX_DEQUE_SIZE = N;
        front = 0;
        rear = 0;
        data = new int[MAX_DEQUE_SIZE];
    }
    ~Deque() {}

    void addFront(int n) {
        if (isFull()) {
            cout << "Deque Full Error" << endl;
            exit(1);
        }
        data[front] = n;
        front = (front - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE;    // front�� 0 ���Ϸ� �������� ��� max index�� ��ȸ
    }

    void addRear(int n) {    // push
        if (isFull()) {
            cout << "Deque Full Error" << endl;
            exit(1);
        }
        rear = (rear + 1) % MAX_DEQUE_SIZE;   // rear�� max�� �Ѿ�� ��� �ٽ� 0��° index�� ��ȸ
        data[rear] = n;
    }

    int deleteFront() {  // pop
        if (isEmpty()) {
            return -1;
        }
        front = (front + 1) % MAX_DEQUE_SIZE;   // front�� max�� �Ѿ�� ��� �ٽ� 0��° index�� ��ȸ
        return data[front];
    }

    int deleteRear() {
        if (isEmpty()) {
            return -1;
        }
        int tmp = data[rear];
        rear = (rear - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE;   // rear�� 0 ���Ϸ� �������� ��� max index�� ��ȸ
        return tmp;
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        }
        return data[(front + 1) % MAX_DEQUE_SIZE];
    }

    int getRear() {
        if (isEmpty()) {
            return -1;
        }
        return data[rear];
    }

    int size() {
        return front <= rear ? rear - front : (rear + MAX_DEQUE_SIZE) - front;
    }

    bool isEmpty() {
        return front == rear;
    }
    bool isFull() {
        return front == (rear + 1) % MAX_DEQUE_SIZE;
    }
};
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    //�Է� 
    cin >> n;
    Deque deq(n);


    //��¹�
    string prin="";
   

    for (int i = 0; i <= n; i++)
    {
        string s;
        getline(cin, s, '\n');
        if (s.find("push_front") != string::npos) //push_front ��ɾ����� �Ǵ�
        {
            deq.addFront(stoi(s.substr(11)));
        }
        else if (s.find("push_back") != string::npos) //push_back ��ɾ����� �Ǵ�
        {
            deq.addRear(stoi(s.substr(10)));
        }
        else if (s.find("pop_front") != string::npos) //pop_front ��ɾ����� �Ǵ�
        {
            prin += to_string(deq.deleteFront());
            prin += '\n';
        }
        else if (s.find("pop_back") != string::npos) //pop_back ��ɾ����� �Ǵ�
        {
            prin += to_string(deq.deleteRear());
            prin += '\n';
        }
        else if (s.find("size") != string::npos) //size ��ɾ����� �Ǵ�
        {
           prin += to_string(deq.size());
           prin += '\n';
        }
        else if (s.find("empty") != string::npos)
        {
            if (deq.isEmpty())
                prin += "1\n";
            else
                prin += "0\n";
        }
        else if (s.find("front") != string::npos)
        {
            prin += to_string(deq.getFront());
            prin += '\n';
        }
        else if (s.find("back") != string::npos)
        {
            prin += to_string(deq.getRear());
            prin += '\n';
        }
    }
    cout << prin;
    


    return 0;
}