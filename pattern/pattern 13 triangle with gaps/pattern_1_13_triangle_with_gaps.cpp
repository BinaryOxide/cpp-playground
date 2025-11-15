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
        for ( col = 1 ; col <= row ;  col++ )

            {if (col == 1 || row == num||col == row  )
               cout << "* " ;

             else 
                 cout << "  ";  
            } cout << endl;
     }
     
     getch();

}     
