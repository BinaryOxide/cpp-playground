#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int num , i , sum=0 ;
cout << "Enter any positive number : ";
cin >> num;
cout << " sum of serise is : 0";

for (i = 1 ; i<= num ; i++ )
{   sum += i;
    if ( i <= num )
    {
        cout << " + " << i;
    }
    else 
    {
        cout << i << " = ";
    }
}   

cout <<" = " << sum;
getch();
}
