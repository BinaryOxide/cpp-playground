#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

int first = 0 , second = 1 , fibo ;
int i , num ;

cout << "Enter term : ";

cin >> num;

for ( i = 1 ; i<= num ; i++  )
    {
        cout << first << " " << endl;
       fibo = first + second ;
       first = second; 
       second = fibo;

       
    }

    
    getch();
}