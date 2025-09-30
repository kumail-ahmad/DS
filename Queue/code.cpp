#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Queue
{
public:
    Node *head;
    Node *tail;

    Queue()
    {
        head = tail = NULL;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);
        if (empty())
        {

            head = tail = newNode;
        }
        else
        {
            Node *temp = head;
            // while (temp->next != NULL)
            // {
            //     temp = temp->next;
            // }
            // temp->next = newNode;
            tail->next = newNode;
            tail = newNode;
        }
    };

    void pop()
    {
        if (empty())
        {
            cout << " Queue is empty! \n";
            return;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            if (head == NULL)
            {
                tail = NULL;
            }

            delete temp;
        }
    };

    int front()
    {
        if (empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return head->data;
    }

    bool empty()
    {

        return head == NULL;
    };
    void printLinkedQueue()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    };
};

int main()
{
    Queue singlyLinkedQueue;
    singlyLinkedQueue.push(3);
    singlyLinkedQueue.push(2);
    singlyLinkedQueue.push(1);

    singlyLinkedQueue.printLinkedQueue();
    singlyLinkedQueue.pop();
    cout << "Front : " << singlyLinkedQueue.front() << endl;
    singlyLinkedQueue.printLinkedQueue();
    return 0;
}