#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{

char num1 ,row ,col;
cout << "Enter  row :";
cin >> num1 ;


for (row = num1 ; row >= 'a' ; row--)
    {
        for (col = 1 ; col <= num1 - row ; col++)
            {
                cout  << "  " ;  // changes 
            }      
        for (col = 'a' ; col <= 2 * row -'a'  ; col++)
            {
                cout  << row << " " ;  // changes 
            } cout<<endl; 
    }



         getch();
}