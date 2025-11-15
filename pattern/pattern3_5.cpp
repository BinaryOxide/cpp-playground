//pattern5.3
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int num , row, col;

cout << "Enter the last character :";
cin >> num ;
// printing space 
 for (  row = num ; row >= 1 ; row--)
    
        {
            
             for (col = 1 ; col <= num -row ; col++)
            {
             cout << " " ;
            }
   
// printing number 
      for (col = 1 ; col <= row ; col++)
          {
             cout << "@"  ;            
          }
          cout << endl;
        }
          getch();
}