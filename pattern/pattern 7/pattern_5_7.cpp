#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{

char num1 , num2 ,row ,col;
cout << "Enter the last character :";
cin >> num1 ;


//cout << "Enter  col :";
//cin >> num1 ;

cout << endl << endl;

for (row = 'a' ; row <= num1 ; row++)
    {
        for (col = 'a' ; col <=num1  ; col++)
            {
                cout << row << "  " ; // changes " "
            }   
            cout<<endl<<endl; 
    }  
         getch();
}