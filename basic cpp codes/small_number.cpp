#include                  <iostream>
#include                  <conio.h>

using namespace std;
int main()
{

int  num1,num2,num3,num4;

cout<<"Enter 4 number :";

cin>>num1>>num2>>num3>>num4;

if (num1            <      num2 && num1   <    num3 && num1        <          num4)
   {cout<<"small number ="<<num1;}

else if (num2       <      num1 && num2   <    num3 && num2        <          num4)
    {cout<<"small number ="<<num2;}

else if  (num3      <      num1 && num3   <    num2 && num3        <          num4)
    {cout<<"small number ="<<num3;}

else {cout<<"small number ="<<num4;}

getch();




}