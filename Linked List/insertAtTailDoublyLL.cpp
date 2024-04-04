// Insert at Tail -> adds a node after tail (last) node

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

int main() {

    Node* node1  = new Node(20);

    Node* head = node1;

    Node* tail = node1;

    print(head);

    insertAtTail(head, tail, 30);

    print(head);

    insertAtTail(head, tail, 40);

    print(head);

    cout << "Length of Doubly Linked List : " << getLength(head) << endl;

    return 0;
}