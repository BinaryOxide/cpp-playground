#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{

int num ,row ,col , count = 0 ;
cout << "Enter  any number :";
cin >> num ;


for (row = 1 ; row <= num ; row++)
     {
        for ( col = 1 ; col <= row ;  col++ )

            {
             if (count < 10)
             cout << ++count << "   " ;
              else if ( count >=10 || count < 100 )
              cout << ++count << "  " ;  
               
            } cout << endl;
     }
     
     getch();

}     