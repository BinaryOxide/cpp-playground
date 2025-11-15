#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int i, num , count =0;
cout<< "Enter any positive number :";
cin >> num;

for  (i=2; i<num ; i++ )
{
     if (num % i==0)
     {count++;
     break;
     }
}     
if (count == 0)
     cout << num<< " is prime number ";

     else {
        cout << num << " isn't prime number";
          }

getch();
}