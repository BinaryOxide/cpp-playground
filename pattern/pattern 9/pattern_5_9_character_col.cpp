#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{

char num1 ,row ,col;
cout << "Enter  row :";
cin >> num1 ;


for (row = 'a' ; row <= num1 ; row++)
    {
        for (col = 1 ; col <= num1 - row ; col++)
            {
                cout  << "  " ;  // changes 
            }     
    
        for (col = 'a' ; col <= 2 * row -'a'  ; col++)
            {
                cout  << col << " " ;  // changes 
            } cout<<endl; 
    }


         getch();
}
