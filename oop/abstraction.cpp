#include<iostream> //* Include the iostream library for input/output operations
#include<conio.h> //* Include the conio.h library for console input/output operations
using namespace std; //* Use the standard namespace

//* Define an abstract class named 'class_vehicle'
class class_vehicle{
  public: 
  //* Declare a pure virtual function named 'display'
  virtual void  display()=0; 
};

//* Define a class named 'class_mercedez' that inherits from 'class_vehicle'
class class_mercedez :public  class_vehicle {
  public:
  //* Override the 'display' function in the 'class_mercedez' class
  void display(){
    cout << "called from class_mercedez class" << endl;
  }
};

//* Define a class named 'class_bmw' that inherits from 'class_vehicle'
class class_bmw :public  class_vehicle {
  public:
  //* Override the 'display' function in the 'class_bmw' class
  void display(){
    cout << "called from class_bmw class" << endl;
  }
};

int main(){
  //* Declare a pointer to 'class_vehicle'
  class_vehicle *pointer_variable_display;
  
  //* Create objects of 'class_mercedez' and 'class_bmw'
  class_mercedez varaiable_mercedez;
  class_bmw varaiable_bmw;
  
  //* Call the 'display' function on the 'varaiable_mercedez' object
  pointer_variable_display  = &varaiable_mercedez;
  pointer_variable_display ->  display();
  
  //* Call the 'display' function on the 'varaiable_bmw' object
  pointer_variable_display  = &varaiable_bmw;
  pointer_variable_display -> display();
  
  getch(); //* Wait for a character input
}
