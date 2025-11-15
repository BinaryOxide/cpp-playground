#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

int main() {
    Node* head = new Node(1);  // Create the head node with data 1
    head->next = new Node(2);  // Create the next node with data 2
    head->next->next = new Node(3);  // Create the next node with data 3
    // Continue this process for additional nodes

    cout << head ->data << endl;   
    cout << head -> next -> data<< endl;
    cout << head -> next -> next -> data<< endl; 
    int sum = head ->data + head -> next -> data + head -> next -> next -> data;
    cout << "Sum of the linked list is: " << sum << endl;

    return 0;
}
