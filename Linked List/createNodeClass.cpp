// Implementing a Node Class in Linked List

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

int main()
{
    Node* node1 = new Node(10);

    cout << "Data of Node : " << node1 -> data << endl;

    cout << "Next Node Address : " << node1 -> next << endl;

    return 0;
}