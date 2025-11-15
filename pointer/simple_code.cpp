 #include <iostream>
 #include <conio.h>
 using namespace std;
 class class_number{
  public:
  int main_number;
  class_number(int number){
    main_number = number + 30;
    
  }
  void display(){

    cout << main_number;
  }
 };
 int main(){
  
  class_number object_number(30);
  object_number.display();

  getch();
 }