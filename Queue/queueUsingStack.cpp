#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> s1, s2;

    MyQueue() {}

    void push(int data) {
       
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
 
        s1.push(data);
  
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop() {
        if (s1.empty()) {
            cout << "Queue is empty!\n";
            return -1;
        }
        int ans = s1.top();
        s1.pop();
        return ans;
    }

    int peek() {
        if (s1.empty()) {
            cout << "Queue is empty!\n";
            return -1;
        }
        return s1.top();
    }

    bool empty() {
        return s1.empty();
    }
};

int main() {
    MyQueue q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.peek() << endl; 
    cout << "Pop: " << q.pop() << endl;    
    cout << "Front: " << q.peek() << endl; 
    cout << "Empty? " << q.empty() << endl;

    return 0;
}
