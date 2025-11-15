#include<iostream>
#include<conio.h>
using namespace std;
class number{
    int external_number;
     int internal_number;
     public:
       // adding default constructor
       number (){
        internal_number = 0;
        external_number = 0;
       }
       number (int pass_internal_number,int pass_external_number){
        internal_number = pass_internal_number;
        external_number = pass_external_number;
       }
       // display function using for input / output
       void display (){
         cout << "Internal number = " << internal_number << endl;
         cout << "External number = " << external_number << endl;

       }

       number operator+( number object ){
        // create a temporary object 
          number temp;
           // temp is a object of class -> number
           temp.internal_number = internal_number + object.internal_number;
           temp.external_number = external_number + object.external_number;

       }
};
int main(){
    // decalare objects 
    number number1(10 , 20), number2(20 , 40);
    

    // declare object that can add(+) number1 and number2
    number addition;
    addition = number1 + number2 ;

   addition.display();

    getch();
}
/*                            
graph TD;
    A[Start] --> B[Declare number class];
    B --> C[Declare internal_number and external_number];
    C --> D[Define default constructor];
    C --> E[Define parameterized constructor];
    D --> F[Initialize internal_number and external_number to 0];
    E --> G[Initialize internal_number and external_number to passed values];
    A --> H[Declare display function];
    H --> I[Print internal_number and external_number];
    A --> J[Declare operator+ function];
    J --> K[Create temp object];
    K --> L[Add internal_number of both objects];
    K --> M[Add external_number of both objects];
    J --> N[Return temp object];
    A --> O[Declare main function];
    O --> P[Create number1 object with internal_number=10 and external_number=20];
    O --> Q[Create number2 object with internal_number=20 and external_number=40];
    O --> R[Create addition object];
    R --> S[Add number1 and number2 objects using operator+ function];
    S --> T[Store the result in addition object];
    R --> U[Call display function of addition object];
    U --> V[Print internal_number and external_number of addition object];
    V --> W[Stop];
    */