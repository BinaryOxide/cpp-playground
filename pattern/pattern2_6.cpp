// pattern6.2 (character )
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
 char num , row, col;

cout << "Enter the last character :";
cin >> num ;

// printing space 
 for (  row = 'a' ; row <= num ; row++)
    
        {
            
             for (col = 'a' ; col <= num -row ; col++)
            {
             cout << " " ;
            }
   
// printing number 
      for (col = 'a' ; col <= row ; col++)
          {
             cout << col  ;            
          }
          cout << endl;
        }

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

 // printing space 
 for (  row = num -1 ; row >='a'; row--)
    
       {           
            for (col = 'a' ; col <= num -row ; col++)
           {
             cout << " " ;
           }
   
// printing number 
      for (col = 'a' ; col <= row ; col++)
          {
            cout << col  ;            
          }
         cout << endl;
          }
      
          getch();
}