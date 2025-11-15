#include <iostream>
#include <conio.h>
using namespace std;
//  pattern 1 
int main()
{
int num , row , col;
cout << "Enter number of lines : ";
cin >> num;
for ( row = 1 ; row <= num  ;  row++ )
    {
      for (col = 1 ; col <=row ; col++)
          {
             cout << " " << row;
          }
      cout << endl;    
    }
   getch();

}
//    example -  
//    Enter number of lines : 4
//    1
//    2 2
//    3 3 3
//    4 4 4 4
