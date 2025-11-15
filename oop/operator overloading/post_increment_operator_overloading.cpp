#include<iostream>
#include<conio.h>
using namespace std;
class class_increment{
    int value;
    public: 
    // adding constructor
    class_increment(){
        value = 10;
    }

    int operator++(int){
        value++;
    }
    int display_increment(){
      cout << "Value after increment : " << value ;
    }
};
int main(){
    class_increment object_increment;
    object_increment ++ ;
     object_increment ++ ;
    object_increment.display_increment();
  
}