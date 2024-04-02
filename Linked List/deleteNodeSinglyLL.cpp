// Deleting a Node

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

    // destructor
    ~Node() {
        int value = this -> data;

        // memory free
        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }

        cout << "Memory is free for Node with data : " << value << endl;
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

void deleteNode(Node* &head, int position) {

    // deleting first/start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;

        // removing the reference of the deleting node
        temp -> next = NULL;

        // memory free for start node
        delete temp;

    } else {

        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;

        while(count < position) {
            prev = curr;
            curr = curr -> next;
            count++;
        }

        prev -> next = curr -> next;

        // removing the reference of the deleting node
        curr -> next = NULL;

        // memory free for node
        delete curr;
    }
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

    deleteNode(head, 1);

    print(head);

    deleteNode(head, 4);

    print(head);

    return 0;
}
