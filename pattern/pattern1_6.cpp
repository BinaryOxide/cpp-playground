// pattern6.1 (number )
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int num , row, col;

cout << "Enter the last number :";
cin >> num ;

// printing space 
 for (  row = 1 ; row <= num ; row++)
    
        {
            
             for (col = 1 ; col <= num -row ; col++)
            {
             cout << " " ;
            }
   
// printing number 
      for (col = 1 ; col <= row ; col++)
          {
             cout << col  ;            
          }
          cout << endl;
        }



// printing space 
 for (  row = num -1 ; row >=1 ; row--)
    
        {
            
             for (col = 1 ; col <= num -row ; col++)
            {
             cout << " " ;
            }
   
// printing number 
      for (col = 1 ; col <= row ; col++)
          {
             cout << col  ;            
          }
          cout << endl;
        }
          getch();
}