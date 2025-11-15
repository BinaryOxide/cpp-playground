// sum of even numbers from 1 to <= num
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{   int num3;
    cout << "for EVEN number  press 0 ";
    cout << endl; // new line 
    cout << "For ODD  number  press 1 ";
    cout << endl;
    cout << "choose operator : ";

    char op;
         cin >> op;

switch (op)
{ //   tart of switch statement 

   case '0':
   {                             //  Even number start  
        int num1 , num2 , i;
          int sum ;
      sum = num1;
         cout << " Enter the last number : ";
            cin >> num1;
        cout << "Even number of " << num1 << " is : ";
            // cout << endl; 
   for (i = 2 ; i <= num1 ; i = i+2 )
        cout << i << " " << "> ";

break;

   }    // Even number end 
   case '1':
   {     // ODD number start 

   int num1 , num2 , i;
   int dev;
   cout << " Enter the last number : ";
      cin >> num1 ;
   cout << "ODD number of " << num1 << "is : " ;
    
   for ( i = 1 ; i <= num1 ; i = i+2)
       cout << i << " " << ">";
     
break;

   }   // odd number end 

   default :
  {
    cout << "Please enter a valid number ! ";
  }
} // switch statement end 

cout << " Done ! ";
       getch();  


}