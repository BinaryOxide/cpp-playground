#include <iostream>
#include <conio.h>
using namespace std;
int main(){

int array[2][3];
int (*pointer)[3] = array;
cout << array << endl;
cout << *array << endl;
cout << array[0] << endl;
cout << &array[0][0] << endl;

  getch();
}