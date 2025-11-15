 #include <iostream>
 #include <conio.h>
 using namespace std;

  

  void increment(int *pointer){
     *pointer = *pointer + 20 ;
    cout << "Address of pointer (pointer) in increment : " << pointer << endl;
    cout << "increment number = " << *pointer << endl ;
   
  }
  

 int main(){
  
  int number ;
  number = 10;
  increment(&number);
  cout << "Address of variable ( &number) : " << &number << endl;
  cout << "number = " << number << endl;

  getch();
 }