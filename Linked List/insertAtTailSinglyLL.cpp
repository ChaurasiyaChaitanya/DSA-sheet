// Insert at Tail -> adds a node after tail (last) node

#include <iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

// Inserting nodes at Tail
void insertAtTail(Node* &tail, int d) {

    // New Node Create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head) {

    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    // Created a new node
    Node* node1 = new Node(10);

    // Head pointed to node1
    Node* head = node1;

    // Tail pointed to node1
    Node* tail = node1;

    print(head);

    insertAtTail(tail, 21);

    print(head);

    insertAtTail(tail, 33);

    print(head);

    return 0;
}