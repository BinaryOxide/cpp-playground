#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
   int num1,num2,num3,n1,n2,n3,rem,gcd,lcm;
   cout<< "Enter 2 number :";
   cin>> num1>>num2>>num3;
   n1=num1;
   n2=num2;
   n3=num3;
   while(n3!=0)   //  Example :
  {  rem=n1 %n2%n3;  //  n1   n2   rem
  
       n1=n2=n3;    //  15 % 15 % 30 = 12
       n2=n3=rem;   //     %  = 0
  } gcd =n1;        //  rem = 0 (stop)
   lcm=(num1 * num2* num3) / gcd;
   cout <<"GCD = " << gcd <<endl;
   cout <<"LCM = " << lcm <<endl;
   cout << endl;
   cout << "Done !";
   getch();

int main()
{
 cout<<" payuk World !";
}

}