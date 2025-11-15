#include <iostream>
#include <conio.h>
using namespace std;
int main(){

  
 
  //------------------ change the value using pointer
  int index; int *pointer;
  pointer = &index;
  cout << index << endl;
  cout << &pointer << endl;// outout: address
  index = 5;
  cout << index << endl;// outout: 5 (value)
  *pointer = 10;
  cout << index   << " after changing the value of pointer "<< endl;
  // outout: 10 (after changing the value by pointer)
  cout << *pointer << endl;// output : 10
   
   int number ; int *pointer_2;
   pointer_2 = & number;
   cout << "size of integer = " << sizeof(int) << endl;
   cout << "address : " << pointer_2 << "value :"<< *pointer_2;
   cout <<
    getch();
}