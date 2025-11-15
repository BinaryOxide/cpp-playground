#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
double sum = 0.0, num;

cout << "Enter last number : ";
cin  >> num ;

for ( double i=1.5 ; i <= num ; i = i+1.0  )
     {
       sum += i ;
       if ( i != num )
          {
            cout << i << " + ";
          }
       else 
          {
             cout << i << " = ";
          } 
     }

cout << sum;
getch();

}