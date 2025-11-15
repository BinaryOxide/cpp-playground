#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{

int num , row , col;
     cout << "Enter yhe last number : ";
     cin >> num ;
// part 1 half - triangle 
     for (row = 1 ; row <= num ; row++ )
        {
         for (col =1 ; col <= num - row ; col++ )
             {
             cout <<"  " ; // printing space == '2'
             }
         for ( col = 1 ; col <= 2 * row -1 ; col++ )
             {
                cout << row << " " ; // print row+ 1-space 
             }cout << endl; 
        } 
    
// part -2 reverse triangle -1 ( up-line)    
     for (row = num - 1 ; row >= 1 ; row-- )
         {
            for( col = 1 ; col <= num - row ; col++ )
               {
                cout << "  " ; // print space == '2'
               }
            for( col = 1 ; col < 2 * row ; col++ )
               {
                cout << row << " " ; // print row + 1-space 
               }cout << endl ;
         } 
    getch();     
}