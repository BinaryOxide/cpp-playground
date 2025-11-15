#include<conio.h> //& Include conio.h library for console input/output functions
#include<iostream> //& Include iostream library for standard input/output streams
using namespace std; //& Use the standard namespace

//& Define a class named 'node'
class node{
  public: //& Public members of the class
  int data; //& Integer data to hold the value of the node
  node *next; //& Pointer to the next node in the linked list

  //& Constructor for the node class
  node(int data)
  {
    this -> data = data; //& Assign the input data to the node's data
    this -> next = nullptr; //& Initialize the next pointer to null
  }
};

//& Main function
int main(){

 node *head = nullptr; //& Initialize the head of the linked list to null

 node *temp = nullptr; //& Initialize a temporary node pointer to null
 cout <<"Enter the size of the linked list :"; //& Prompt the user to enter the size of the linked list
 int size_of_linked_list; cin >> size_of_linked_list; //& Read the size of the linked list from the user

 //& Loop to create the linked list
 for(int loop = 1; loop <= size_of_linked_list ; loop++)
    {
     cout << "Enter the data "<<  loop << " :"; //& Prompt the user to enter the data for the node
      int lists_data; cin >> lists_data; //& Read the data from the user
     if (head == nullptr) //& If the linked list is empty
        {
         head = new node(lists_data); //& Create a new node with the input data and assign it to the head
         temp = head; //& Set the temporary node pointer to the head
        }
     else{ //& If the linked list is not empty
          temp -> next = new node(lists_data); //& Create a new node with the input data and link it to the previous node
          temp = temp -> next; //& Move the temporary node pointer to the new node
         }
    }
    //& Print the linked list
    node *print_data_1 = head; //& Initialize a node pointer to the head of the linked list
    cout <<"Data of the main linked list :"; //& Print a message to indicate the start of the linked list data
    while(print_data_1  != nullptr) //& Loop through the linked list
         {
          cout << print_data_1 -> data <<"  "; //&   Print the data of the current node
          print_data_1 = print_data_1 -> next; //& Move the node pointer to the next node
         }  
    cout <<endl; //& Print a newline character

    //& Start the deletion process
    cout <<"Enter the position of node that you want to delete :"; //& Prompt the user to enter the position of the node to delete
    int delete_position; cin >> delete_position; //& Read the position from the user

    node *previous = head; //& Initialize a node pointer to the head of the linked list
    
    if(delete_position == 1) //& If the position is the first node
      {
        node *head_delete = head; //& Create a temporary node pointer to the head
        head = head -> next; //& Move the head to the next node
        delete head_delete; //& Delete the first node
      } 
    else{ //& If the position is not the first node
          for(int loop = 2 ; loop < delete_position; loop++) //& Loop to the node before the position
             {
              previous = previous -> next; //& Move the node pointer to the next node
             }
             node *current_and_delete = previous -> next; //& Create a temporary node pointer to the node at the position
             previous -> next = current_and_delete -> next; //& Link the node before the position to the node after the position
             
             delete current_and_delete; //& Delete the node at the position
        }
     //& Print the linked list after the deletion process
     node *print_data_2 = head; //& Initialize a node pointer to the head of the linked list
     cout << "The list after the deletion process :" << endl; //& Print a message to indicate the start of the linked list data after deletion
      while(print_data_2  != nullptr) //& Loop through the linked list
      {
       cout << print_data_2 -> data << "   "; //& Print the data of the current node
       print_data_2 = print_data_2 -> next; //& Move the node pointer to the next node
      }  
  getch(); //& Wait for a character input before ending the program
}
