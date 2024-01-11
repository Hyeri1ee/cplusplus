#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Queue {
public:
    int N;
    int K;
    int front, rear;
    int* data; // Removed initialization here

public:

    Queue(int n, int k) {
        K = k;
        N = n + 1;
        front = rear = 0;
        data = new int[N]; // Initialize data array after setting N
    }

    bool isEmpty() {
        int result = 0;
        for (int i = 0; i < N; i++) {
            result += data[i];
        }
        if (result == 0)
            return true;
        else
            return false;
    }

    void enqueue(int v) {
       
        data[rear % N] = v;
        rear++;
    }

    void dequeue() {
        int count = 0;
        while (count < K && !isEmpty()) {
            front = (front + 1) % N;
            while (data[front] == 0)
            {
                front = (front + 1) % N;
            }

            count++;
        }
        data[front] = 0;
    }

    ~Queue() { delete[] data; } // Added destructor to free memory
};

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, K;
    cin >> N >> K;

    vector<int> ans;
    Queue que(N,K);
    for (int i = 0; i <= N; i++) {
        que.enqueue(i);
    }
    
   
    while (!que.isEmpty()) {
        que.dequeue();
        ans.push_back(que.front);
    }

    string answer = "<";
    for (int i = 0; i < N; i++) {
        answer += to_string(ans[i]);
        if (i != N - 1)
            answer += ", ";
        else
            answer += ">";
    }

    cout << answer;
    return 0;
}
