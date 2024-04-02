// Insert a node at specified (middle) position

#include <iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

// Inserting nodes at Head
void insertAtHead(Node* &head, int d) {

    // New Node Create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

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

// Inserting a node at given position
void insertAtPosition(Node* &head, Node* &tail, int position, int d) {

    // inserting at head (start) node (1st position)
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;

    int count = 1;

    // traverse to n-1 nodes (2 if insert at position is 3)
    while(count < position-1) {
        temp = temp -> next;
        count++;
    }

    // inserting at last node (last position)
    if(temp -> next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    // creating a node
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
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

    insertAtTail(tail, 22);

    print(head);

    insertAtTail(tail, 50);

    print(head);

    insertAtPosition(head, tail, 3, 35);

    print(head);

    insertAtPosition(head, tail, 1, 7);

    print(head);

    insertAtPosition(head, tail, 6, 63);

    print(head);

    return 0;
}

