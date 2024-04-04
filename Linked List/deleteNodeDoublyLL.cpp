// Delete a Node in Doubly Linked List

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

    ~Node() {
        int value = this -> data;

        if(this -> next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory free for Node with data : " << value << endl;
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

void deleteNode(Node* &head, int position) {

    // deleting first/start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;

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

        curr -> prev = NULL;

        prev -> next = curr -> next;

        // removing the reference of the deleting node
        curr -> next = NULL;

        // memory free for node
        delete curr;
    }
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

    deleteNode(head, 1);

    print(head);

    deleteNode(head, 3);

    print(head);

    deleteNode(head, 5);

    print(head);

    cout << "Length of Doubly Linked List : " << getLength(head) << endl;

    return 0;
}