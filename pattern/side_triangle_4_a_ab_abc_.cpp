#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
char num , col, row ;
cout << "Enter the last number : ";
cin >> num;

{for (row = 'a' ; row <= num ; row++)
    {
        for (col = 'a' ; col <= row ; col++)
        cout  << col <<"   "  ; 
        cout << endl << endl ;
    } 
}

{for (row = num-1; row >= 'a' ; row--)
    {
        for (col = 'a' ; col <= row ; col++)
        cout  << col << "   "  ; 
        cout << endl << endl ;
    } 
} 
    getch(); 
}