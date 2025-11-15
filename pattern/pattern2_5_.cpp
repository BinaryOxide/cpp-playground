// pattern5.2
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
char num , row, col;

cout << "Enter the last character :";
cin >> num ;
// printing space 
 for (  row = num ; row >='a' ; row--)
    
        {
            
             for (col = 1 ; col <= num -row ; col++)
            {
             cout << " " ;
            }
   
// printing number 
      for (col = 'a' ; col <= row ; col++)
          {
             cout << row  ;            
          }
          cout << endl;
        }
          getch();
}