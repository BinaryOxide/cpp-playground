
#include<iostream> // Include the iostream library for input/output operations
#include<conio.h> // Include the conio.h library for console input/output operations
using namespace std; // Use the standard namespace

// Define a class named 'node'
class node{
public:
    int data; // Declare an integer variable 'data'
    node *next; // Declare a pointer 'next' of type 'node'

    // Define a constructor for the 'node' class
    node(int data)
    {
        this -> data = data; // Initialize 'data' with the value passed to the constructor
        this -> next = nullptr; // Initialize 'next' as null
    }
};

// Define a function to delete a linked list
int delete_list(node* head)
{
    node *temp = head; // Declare a pointer 'temp' and initialize it with 'head'
    while(temp != nullptr) // While 'temp' is not null
    {
        temp = head -> next; // Move 'temp' to the next node
        delete head; // Delete the current node
        head = temp; // Move 'head' to the next node
    }
}

// Define the main function
int main(){
    node *head = nullptr;
    node *temp_input = nullptr;
    cout <<"Enter the amount of element :";
    int ilement_amount ; cin >> ilement_amount;

    for(int loop = 1; loop <= ilement_amount ; loop++)
       {
        cout <<endl<<"Enter data" << loop << ":";
        int temp_data; cin >> temp_data;
        if (head == nullptr)
           {
            head = new node(temp_data);
            temp_input = head ;
           } 
        else{
              temp_input -> next  = new node(temp_data);
              temp_input = temp_input -> next;
            } 
       } 
    cout << "The linked list before deletion process :"; // Print a message
    node *current = head; // Declare a pointer 'current' and initialize it with 'head'
    while(current != nullptr) // While 'current' is not null
    {
        cout << current -> data << " "; // Print the data of the current node
        current = current -> next; // Move 'current' to the next node
    } 
    delete_list(head); // Call the 'delete_list' function to delete the linked list
    cout << endl <<"The linked list before deletion process :"; // Print a message

    cout <<"The list is empty "; // Print a message

    getch(); // Wait for a character input
}       
