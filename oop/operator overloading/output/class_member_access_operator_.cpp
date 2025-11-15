/*F:\DOCUMENT\c++.cpp\c++ visual studio code\oop\operator
 overloading\output\class_member_access_operator_.cpp*/
#include <iostream>
#include <conio.h>
using namespace std;
class class_number {
    int number;
    public:
    class_number(int passed_number){
        cout << "constructor is called " << endl;
        number = passed_number;}
    int display_pass_constructor(){
        cout << "Passed constructor number : " << number << endl;}
    int display_pass_operator(){
        cout << "passed operator number : " << number << endl;}
    class_number *operator->(){
      cout << "operator is called " << endl;  
      return this;
      // "*this "  pointer store the address of object_pass_1  
    }// friend function cannot be used 
    };
int main(){
   // pass to constructor 
    class_number object_pass_1(40);
     object_pass_1.display_pass_constructor();
  cout << endl << endl << endl;
// pass to operator
    class_number object_pass_2(60);
    object_pass_2.display_pass_constructor();
      object_pass_2->display_pass_operator();
    getch();}                                                                                                                                                                    