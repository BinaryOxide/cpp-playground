#include<iostream>
#include<conio.h>
 using namespace std;

 class class_number{
    
    int number;
    public: 
    class_number(){
        number = 0;
    }
    class_number(int m){
      number = m;  
    }
    void display(){
        cout << "number = " << number<< endl;
    }
    void operator+=(int bonusnumber){
    number = number + bonusnumber;
    }

    friend void operator -= (class_number &curObj, int rednumber);

 };
 // & uing for pass the actual value 
 void operator -= (class_number &curObj, int rednumber){
 curObj.number -=rednumber;
 }
 int main(){

    class_number object_number(45) ;
object_number. display ();

object_number += 20;
object_number. display ();

object_number -= 20;
object_number. display ();
    getch();
 }

