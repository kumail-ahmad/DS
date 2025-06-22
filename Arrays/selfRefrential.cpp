#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node n1, n2;

    n1.data = 10;
    n2.data = 20;

    n1.next = &n2;  // n1 points to n2
    n2.next = NULL; // end of list

    printf("n1 data: %d\n", n1.data);
    printf("n2 data from n1: %d\n", n1.next->data);

    return 0;
}