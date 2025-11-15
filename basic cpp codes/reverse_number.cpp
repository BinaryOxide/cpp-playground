#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
 int num , rem , temp , sum=0;
cout << "Enter the  number :";
cin>> num;  
temp = num;
while (temp != 0 )
{
    rem =  temp % 10;
    sum = sum*10 + rem;
    temp = temp /10;
}
cout << "Reverse umber = "<< sum;
getch();
}