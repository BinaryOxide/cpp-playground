#include<iostream>
#include<conio.h>
using namespace std;
struct node{
  int data;
  node *link;
};
int main(){
 node *head=NULL;
  head = new node;
 (*head).data = 10;
 (*head).link = NULL;


 node* second_Node = new node;
    second_Node->data = 20;
    second_Node->link = NULL;

    node* third_Node = new node;
   third_Node->data = 30;
   third_Node->link = NULL;


cout << head -> data << endl;
cout << second_Node -> data << endl;
cout << third_Node -> data << endl;

int sum =  head -> data + second_Node -> data + third_Node -> data;
cout << "sum of all the data is " << sum << endl;



  getch();
}
