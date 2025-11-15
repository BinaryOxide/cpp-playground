#include <iostream>
#include <conio.h>
using namespace std;
class class_number {
    int number;
    public:
    class_number(int passed_number){
        cout << "constructor is called " << endl;
        number = passed_number;
    }
    int display(){
        cout << "number : " << number << endl;
    }
    class_number operator()(int passed_number_for_operator){
      cout << "operator is called " << endl;  
      number = passed_number_for_operator ;  
      return *this;
    }
};
int main(){
   // pass to constructor 
    class_number object_pass(40);
     object_pass.display();

// pass to operator
     object_pass(50);
      object_pass.display();

      // pass to operator
     object_pass(60);
      object_pass.display();
    getch();
}