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
        for (col = 1 ; col <=row  ; col++)
            {
                cout << col * row << " " ;  // changes 
            } cout<<endl; 
    }  
         getch();
}




/// pattern 8.1