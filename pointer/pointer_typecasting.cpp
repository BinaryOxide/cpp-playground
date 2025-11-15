#include <iostream>
#include <conio.h>
using namespace std;
int main(){

 int index = 10; int *pointer ;
 pointer = &index;
 cout << "Size of integer : " << sizeof(int) << endl;
 cout << "addrees :"<< pointer << " , value : " << *pointer << endl;
 char *char_pointer;
 char_pointer = (char *)pointer;
 cout << "Size of character : " << sizeof(char) << endl;
 cout << "addrees :"<< (void *)char_pointer << " , value : " << (int)*char_pointer << endl;

 //-----------------> void pointer 
 cout <<endl<<endl<<endl<< "----------------> void pointer"<<endl<<endl ;
 
 int value = 100; int *ptr_1;
 ptr_1 = &value;
 cout << "adreess of ptr 1 = " << ptr_1 << endl;
 cout << "value of ptr 1 = " << *ptr_1 << endl;
 cout << "value of ptr 1 + (int 8) = " << *ptr_1 + 8  << endl;
 //------> add void pointer - genric pointer
 void *ptr_2;
 ptr_2 = ptr_1;
 cout << "adreess of ptr 2 = " << ptr_2  << endl;
 cout << "adreess of ptr 2 + 1  = " << ptr_2 + 1 << endl;
 cout << "adreess of ptr 2 + 8  = " << ptr_2 + 8 << endl;
 cout << "Note, *ptr_2 + 1 or any integer value is not possible " << endl;
  getch();
}