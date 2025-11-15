#include                      <iostream>
#include                      <conio.h>
using namespace std;
int main()
{ int year ;

  cout << "Enter year :";

  cin >> year;

      if (year  %4 ==0  && year  %100!= 0)
         {
         cout<<year<< "is leapyear ";    
         }  
         
else if (year%400==0)
        {
        cout<<year<< " is Leapyear";
        }

else    {
        cout  <<year<< " is Not Leapyear";      
        }

     getch();}
