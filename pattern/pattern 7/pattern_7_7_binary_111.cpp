#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{

int num1 , num2 ,row ,col;
cout << "Enter  row :";
cin >> num2 ;


cout << "Enter  col :";
cin >> num1 ;


for (row = 1 ; row <= num1 ; row++)
    {
        for (col = 1 ; col <=num2  ; col++)
            {
                cout << (row % 2 ) << " " ; 
                 // changes -  (int % 2)
            }cout<<endl; 
    }  
         getch();
}