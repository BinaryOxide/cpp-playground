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

       number operator+( number object );
       number operator-( number object );

};
number number ::operator+( number object ){
       
          number temp;
          
           temp.internal_number = internal_number + object.internal_number;
           temp.external_number = external_number + object.external_number;

       }

number number ::operator-(number object){
    number temp;
    temp.internal_number = internal_number - object.internal_number;
    temp.external_number = external_number - object.external_number;

}


int main(){

    number number1(10 , 20);
    number number2(20 , 40);
    

    
    number addition;
    addition = number1 + number2 ;

    number subtraction;
    subtraction = number1 - number2;

   addition.display();
   subtraction.display();

    getch();
}
/*
---------------------> explain / flow chart 
Start
 |
 |--> class number
 |     |
 |     |--> Define variables: external_number, internal_number
 |     |
 |     |--> Constructor: number()
 |     |    |
 |     |    |--> Initialize internal_number and external_number to 0
 |     |
 |     |--> Constructor: number(int, int)
 |     |    |
 |     |    |--> Initialize internal_number and external_number with passed values
 |     |
 |     |--> Method: display()
 |     |    |
 |     |    |--> Display internal_number and external_number
 |     |
 |     |--> Operator Overloading: operator+(number)
 |     |    |
 |     |    |--> Add internal_number and external_number of two objects
 |     |
 |     |--> Operator Overloading: operator-(number)
 |     |    |
 |     |    |--> Subtract internal_number and external_number of two objects
 |
 |--> main()
      |
      |--> Create objects: number1, number2
      |
      |--> Perform addition: number1 + number2
      |
      |--> Perform subtraction: number1 - number2
      |
      |--> Display results: addition.display(), subtraction.display()
      |
End
*/
