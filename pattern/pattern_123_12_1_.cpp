// pattern -  1 2 3 - 1 2 - 1
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{

int num , row , col;
cout << "Enter number of lines : ";
cin >> num;
for ( row = num ; row >=1  ;  row-- )
    {
      for (col = 1 ; col <=row ; col++)
          {
              cout << " " << col ;
          }
      cout << endl;    
    }
   getch();


}