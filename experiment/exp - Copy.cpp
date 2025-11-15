#include<iostream>
#include<conio.h>
using namespace std;
class number{
    int external_number;
     int internal_number;
     public:
     
       number (){
        internal_number = 0;
        external_number = 0;
       }
       number (int pass_internal_number,int pass_external_number){
        internal_number = pass_internal_number;
        external_number = pass_external_number;
       }
 
       void display (){
         cout << "Internal number = " << internal_number << endl;
         cout << "External number = " << external_number << endl;

       }

       number operator+( number object ){
       
          number temp;
          
           temp.internal_number = internal_number + object.internal_number;
           temp.external_number = external_number + object.external_number;

       }
};
int main(){

    number number1(10 , 20);
    number number2(20 , 40);
    

    
    number addition;
    addition = number1 + number2 ;

   addition.display();

    getch();
}
/*
