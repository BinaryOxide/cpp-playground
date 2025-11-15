#include <iostream>
#include <conio.h>
using namespace std;
int main()
{int num , rem , temp , sum=0;
cout << "Enter the  number :";
cin>> num;  
temp = num;
while (temp != 0 )
{
    rem =  temp % 10;
    sum = sum*10 + rem;
    temp = temp /10;
}
if (num==sum)
   {cout<<sum<<" is palindrome";}
else
   {cout<<sum<<" is not palinedrome";}
getch();
}

