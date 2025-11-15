


#include <iostream>
#include <conio.h>  
using namespace std;
int main(){ 
  
  int array[3][3] = { 1,2,3,4,5,6,7,8,9 };
  int *pointer; pointer = &array[2][1];

  cout << "*pointer       = " << *pointer        << endl;//* output : 8
  cout << " pointer       = " <<  pointer        << endl;//* output : 0x61ff04
  cout << "*array         = " << *array          << endl;//* output : 0x61fee8
  cout << "&array         = " << &array          << endl;//* output : 0x61fee8
  cout << "array[2][2]    = " << array[2][2]     << endl;//* output : 9
  cout << "&array[2][2]   = " << &array[2][2]    << endl;//* output : 0x61ff08
  cout << "array[2][2]    = " << array[2][2]     << endl;//* output : 9
  cout << "*( array + 1)  = " << *( array + 1)   << endl;//* output : 0x61fef4
  cout << "array + 1      = " << array + 1       << endl;//* output : 0x61fef4
  cout << "*array + 1     = " << *array + 1      << endl;//* output : 0x61feec
  cout << "*(array + 1)+2 = " << *(array + 1)+ 2 << endl;//* output : 0x61fefc
  cout << "**array        = " << **array         << endl;//* output : 1
  cout << "array[1]+1     = " << array[1]+1      << endl;//* output : 0x61fef8

  //*cout << **pointer     << endl;

  cout << endl << endl << endl;

    cout << "&__array__[0][0] = " <<  &array[0][0]   << endl;//* output : 0x61fee8
    cout << "array[0][0]      = " <<  array[0][0]   << endl;//* output : 1         
    cout << "&__array__[0][1] = " <<  &array[0][1]   << endl;//* output : 0x61feec
    cout << "array[0][1]      = " <<  array[0][1]   << endl;//* output : 2
    cout << "&__array__[0][2] = " <<  &array[0][2]   << endl;//* output : 0x61fef0
    cout << "array[0][2]      = " <<  array[0][2]   << endl;//* output : 3
    cout << "&__array__[1][0] = " <<  &array[1][0]   << endl;//* output : 0x61fef4
    cout << "array[1][0]      = " <<  array[1][0]   << endl;//* output : 4
    cout << "&__array__[1][1] = " <<  &array[1][1]   << endl;//* output : 0x61fef8
    cout << "array[1][1]      = " <<  array[1][1]   << endl;//* output : 5
    cout << "&__array__[1][2] = " <<  &array[1][2]   << endl;//* output : 0x61fefc
    cout << "array[1][2]      = " <<  array[1][2]   << endl;//* output : 6
    cout << "&__array__[2][0] = " <<  &array[2][0]   << endl;//* output : 0x61ff00
    cout << "array[2][0]      = " <<  array[2][0]   << endl;//* output : 7
    cout << "&__array__[2][1] = " <<  &array[2][1]   << endl;//* output : 0x61ff04
    cout << "array[2][1]      = " <<  array[2][1]   << endl;//* output : 8
    cout << "&__array__[2][1] = " <<  &array[2][1]   << endl;//* output : 0x61ff08
    cout << "array[2][1]      = " <<  array[2][1]   << endl;//* output : 9
    getch();
}  