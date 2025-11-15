#include <iostream>
#include <conio.h>
using namespace std;
//  pattern 1 
int main()
{
char   num , row , col;

cout << "Enter number of lines : ";
cin >> num;
for ( row = 'a' ; row <= num  ;  row++ )
    {
      for (col = 'a' ; col <=row ; col++)
          {
             cout << " " << col;
          }
      cout << endl;    
    }
   getch();

}
//    example -  
//?    Enter number of lines : 4
//    a
//    a b
//    a b c 
//    a b c d