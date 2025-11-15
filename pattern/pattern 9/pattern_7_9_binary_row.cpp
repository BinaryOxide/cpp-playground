#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{

int num1 ,row ,col;
cout << "Enter  row :";
cin >> num1 ;


for (row = 1 ; row <= num1 ; row++)
    {
        for (col = 1 ; col <= num1 - row ; col++)
        if (row < 10 )
            {
                cout  << "  " ;  // changes 
            }  
        else if (row >= 10 )
        {
                cout  << " " ;  // changes 
            }  
    
        for (col = 1 ; col <= 2 * row -1  ; col++)
            {
                cout  << ( row % 2 )<< " " ;  // changes 
            } cout<<endl; 
    }


         getch();
}


