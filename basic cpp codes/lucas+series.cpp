#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

int first = 2 , second = 1 , lucas ;
int i , num ;

cout << "Enter term : ";

cin >> num;

for ( i = 1 ; i<= num ; i++  )
    {
        cout << first << " " ;
       lucas = first + second ;
       first = second; 
       second = lucas;

       
    }

    
    getch();
}