#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{

int num ,row ,col;
cout << "Enter  any number :";
cin >> num ;


for (row = 1 ; row <= num ; row++)
     {
        for ( col = 1 ; col <= num ;  col++ )

            {if ( row==col|| row+col == num + 1  )
               cout << "* " ;

             else 
                 cout << "  ";  
            } cout << endl;
     }
     
     getch();

}     