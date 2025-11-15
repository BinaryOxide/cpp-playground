//* c++ DSA linked-list  implementation */
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class class_node{ //* DATA to be stored in the NODE
public:
     string name; //* varaible for store name
     int roll;    //* variable for storing roll number
     int sid;     //* variable for storing student id
     int age;     //* variable for storing age of a student
  class_node *next;   //* pointer to point to next node
};
//* Head of the list , initially set to NULL
class_node *head = NULL ;
//*--------------> FUNCTION to insert a ne node at the beginning of the list
void insert( string passed_name ,int passed_roll , int  passed_sid ,int passed_age){
  class_node* temp = new class_node();    //* create a new node with given data
  temp -> name = passed_name; // assign  the name with passed role
  temp -> roll = passed_roll; // assign the roll with passed_role
  temp -> sid  = passed_sid ; // assign the sid with passed_sid
  temp->  age  = passed_age ; // assign the age with passed_age
  temp -> next = head; //*set the new node as the head of the list
   head = temp; // set the head to the new node
}
//------------------> function to display the  elements of the list
void display(){
  class_node *temporary_object = head; //* start at the head of the list
  cout << "linked student list is  : " << endl;
  while(temporary_object != NULL ){ //   Traverse the list

      cout <<"Name : " <<  temporary_object -> name ;
      cout <<"Roll : " <<  temporary_object -> roll ;
      cout <<"SID  : " <<  temporary_object -> sid  ;
      cout <<"Age  : " <<  temporary_object -> age  ;
      temporary_object = temporary_object -> next; //   MOVE to the next node
      cout << endl <<"<-------------------------------------------->"<< endl;
  }
}//* --------------> main function start
int main() {

  /*? Insert nodes into the list */
  string inputed_string;
  int inputed_roll;
  int inputed_sid ;
  int inputed_age;

  int total_members;
  cout << "How many students dat do you want to enter  in the linked list ? " << endl;
  cout << "Enter the amount of student : ";
   cin >> total_members;
   cout << endl;
   cin.ignore(); //  to clear the newline character from the buffer
   //* loop through and take inputs from user for each member
   for(int loop = 1 ; loop <=  total_members ; loop ++){
       cout << "Enter the name of student " << loop+1 << " : "; getline(cin,inputed_string);
       // ------------------------------------------------------------------------->
       cout <<  "Enter Roll number of student "<<loop <<": ";cin >> inputed_roll;
       // ------------------------------------------------------------------------->
       cout << "Enter SID of student "<<loop <<": ";cin >>  inputed_sid;
       // ------------------------------------------------------------------------->
       cout << "Enter the AGE of student " << loop  << ": ";cin >>  inputed_age;
       // ------------------------------------------------------------------------->
       cout <<  endl <<"<-------------------------------------------->"<< endl;
       cin.ignore(); //  to clear the newline character from the buffer
       insert(inputed_string,inputed_roll,inputed_sid, inputed_age);
   }
   // -----------------------> call the display function
   display();
  getch();
}
