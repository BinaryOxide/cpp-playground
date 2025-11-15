#include <iostream>
#include <conio.h>
using namespace std;
int main(){
   
int array[] = {10,20,30,40,50}; 
cout << array << endl; // output : 0x61fefc
cout << &array[0] << endl;// output : 0x61fefc
cout << array[0] << endl;// output : 10
cout << *array << endl; // output : 10

int number[] = { 12 , 34 , 56 , 78 , 90 };
int loop;
for (loop = 0 ; loop < 5 ; loop++){

  cout << "Addrees of array " << loop << " = " << &number[loop] << endl;
  cout << "Addrees of array " << loop << " = " << number+loop << endl;
  cout << endl;
  cout << "value of array " << loop << " = " << number[loop] << endl;
  cout << "value of array " << loop << " = " << *(number+loop) << endl;
  cout << endl;

}
int *pointer = number;
// number ++ (invalid)
// pointer ++ (valid)
cout <<  *pointer << endl;
// output :  12 ( first array )

  getch();}
  


