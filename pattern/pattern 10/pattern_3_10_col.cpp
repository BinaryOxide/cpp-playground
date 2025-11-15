#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{

int num1 ,row ,col;
cout << "Enter  row :";
cin >> num1 ;


for (row = num1 ; row >= 1 ; row--)
    {
        for (col = 1 ; col <= num1 - row ; col++)
            {
                cout  << "  " ;  // changes 
            }      
        for (col = 1 ; col <= 2 * row -1  ; col++)
            {
                cout  << col << " " ;  // changes 
            } cout<<endl; 
    }



         getch();
}
