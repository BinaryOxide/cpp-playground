#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
   int num1,num2,n1,n2,rem,gcd,lcm;
   cout<< "Enter 2 number :";
   cin>> num1>>num2;
   n1=num1;
   n2=num2;
   while(n2!=0)   //  Example :
  {  rem=n1%n2;   //  n1   n2   rem
       n1=n2;     //  60 % 24 = 12
         n2=rem;  //  24 % 12 = 0
  } gcd =n1;      //  rem = 0 (stop)
   lcm=(num1 * num2) / gcd;
   cout <<"GCD = " << gcd <<endl;
   cout <<"LCM = " << lcm <<endl;
   cout << endl;
   cout << "Done !";
   getch();
}