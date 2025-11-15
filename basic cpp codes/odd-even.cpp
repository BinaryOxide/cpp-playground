//?  ODD - Even from series
//!  ODD  = 1
//   EVEN = 2 
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

int num ,sum , i , even = 0 , odd = 0;
cout << "Enter the last number : ";
cin >> num;

for (i = 1 ; i <= num ; i++)
     {
        if(i % 2 == 0 )
          {
            even = even + i ;
          }
       else 
          {
            odd = odd + i;
          }

     }

cout<<odd<< " - "<<even<< " = "<< odd - even   ;

getch();
}