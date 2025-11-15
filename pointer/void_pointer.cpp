#include <iostream>
using namespace std;
int main(){ 

int value = 100; int *ptr_1;
 ptr_1 = &value;
 cout << "address of ptr 1 = " << ptr_1 << endl;
 cout << "value of ptr 1 = " << *ptr_1 << endl;
 cout << "value of ptr 1 + (int 8) = " << *ptr_1 + 8  << endl;
 //------> add void pointer - genric pointer
 void *ptr_2;
 ptr_2 = ptr_1;
 cout << "address of ptr 2 = " << ptr_2  << endl;
 cout << "address of ptr 2 + 1  = " << ptr_2 + 1 << endl;
 cout << "address of ptr 2 + 8  = " << ptr_2 + 8 << endl;
 cout << "Note, value of *ptr_2 + 1 or any integer value is not possible " << endl;
 
 cout << endl << endl ;
 return 0;
 
}