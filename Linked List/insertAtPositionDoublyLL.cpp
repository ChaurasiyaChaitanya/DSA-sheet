// Insert a node at specified (middle) position in Doubly Linked List

#include <iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d) {
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

// Traversing a linked list
void print(Node* head) {

    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " " ;
        temp = temp -> next;
    }
    cout << endl;
}

// Length of linked list
int getLength(Node* head) {

    int len = 0;

    Node* temp = head;

    while(temp != NULL) {
        len++;
        temp = temp -> next;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int d) {

    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    } else {
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head, Node* &tail, int d) {

    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    } else {
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

// Inserting a node at given position
void insertAtPosition(Node* &head, Node* &tail, int position, int d) {

    // inserting at head (start) node (1st position)
    if(position == 1) {
        insertAtHead(head, tail, d);
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
        insertAtTail(head, tail, d);
        return;
    }

    // creating a node
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next -> prev = nodeToInsert;

    temp -> next = nodeToInsert;

    nodeToInsert -> prev = temp;
}

int main() {

    // Node* node1  = new Node(20);

    Node* head = NULL;

    Node* tail = NULL;

    print(head);

    insertAtHead(head, tail, 10);

    print(head);

    insertAtHead(head, tail, 5);

    print(head);

    insertAtTail(head, tail, 30);

    print(head);

    insertAtTail(head, tail, 40);

    print(head);

    insertAtPosition(head, tail, 3, 17);

    print(head);

    insertAtPosition(head, tail, 1, 2);

    print(head);

    insertAtPosition(head, tail, 7, 50);

    print(head);

    cout << "Length of Doubly Linked List : " << getLength(head) << endl;

    return 0;
}

