#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Que {
protected:
    int front;
    vector<int> data;
    int N;

public:
    Que(int n) {
        N = n;
        front = 0;
        for (int i = 0; i < N; i++)
            data.push_back(i + 1);
    }

    bool empty() {
        return N == 0;
    }

    void pop_front() {
        if (!empty()) {
            front = (front + 1) % data.size();
            N--;
        }
    }

    void push_back(int a) {
        data.push_back(a);
        N++;
    }

    int first_element() {
        return data[front];
    }

    int size() {
        return N;
    }
};

int main() {
    int N, K;
    cin >> N >> K;
    Que q(N);
    string ans = "<";
    int time = 0;

    while (!q.empty()) {
        if (q.size() == 1) {
            int a = q.first_element();
            q.pop_front();
            ans += to_string(a);
            ans += ">";;
        }
        else if (time % K == (K - 1)) {
            int a = q.first_element();
            q.pop_front();
            ans += to_string(a);
            ans += ", ";
        }
        else {
            q.push_back(q.first_element());
            q.pop_front();
        }
        time++;
    }

    cout << ans+"\0";

    return 0;
}
