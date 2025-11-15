#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{

int num , col, row ;
cout << "Enter the last number : ";
    cin >> num;



{for (row = 1 ; row <= num ; row++)
    {
        for (col = 1 ; col <= row ; col++)
            cout << "   " << row ; 
            cout << endl;
    } 
}

{for (row = num-1; row >= 0 ; row--)
    {
        for (col = 1 ; col <= row ; col++)
            cout << "   " <<row ; 
              cout << endl;
    } 
}
    getch();
}