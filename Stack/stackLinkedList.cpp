#include <iostream>
#include <list>
using namespace std;

class Stack
{
    list<int> ll;

public:
    void pushBack(int val)
    {
        ll.push_front(val);
    }

    void pop()
    {
        ll.pop_front();
    }
    int top()
    {
        return ll.front();
    }
    bool empty()
    {
        return ll.size() == 0;
    }
};

int main()
{
    Stack st;

    st.pushBack(3);
    st.pushBack(2);
    st.pushBack(1);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}