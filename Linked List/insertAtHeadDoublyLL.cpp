// Insert at Head - adds a node before head(first) node

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

void insertAtHead(Node* &head, Node* &tail,  int d) {

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

int main() {

    Node* node1  = new Node(20);

    Node* head = node1;

    Node* tail = node1;

    print(head);

    insertAtHead(head, tail, 10);

    print(head);

    insertAtHead(head, tail, 5);

    print(head);

    cout << "Length of Doubly Linked List : " << getLength(head) << endl;

    return 0;
}

