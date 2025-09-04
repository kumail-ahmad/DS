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

class List
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = tail = NULL;
    };
    void pushFront(int val)
    {
        Node *newNode = new Node(val);
        if (head == 0)
        {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }
    void PrintInLinkedList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL \n";
    }
    //Bruteforce approach 
    void middleofLinkedList()
    {
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        int midPos = (count / 2) + 1;
        cout << "The middle node is : " << midPos << endl;
    }
};
int main()
{
    List LinkedList1;
    LinkedList1.pushFront(6);
    LinkedList1.pushFront(9);
    LinkedList1.pushFront(4);
    LinkedList1.pushFront(5);

    LinkedList1.PrintInLinkedList();
    LinkedList1.middleofLinkedList();
    return 0;
}