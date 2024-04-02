// Insert at Head - adds a node before head(first) node

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

// Inserting nodes at Head
void insertAtHead(Node* &head, int d) {

    // New Node Create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
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

    print(head);

    insertAtHead(head, 21);

    print(head);

    insertAtHead(head, 33);

    print(head);

    return 0;
}
