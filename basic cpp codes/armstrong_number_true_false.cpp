#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int num , sum=0 , temp , rem;
  cout << "enter any number : ";
  cin >> num;
  temp = num;
  while (temp !=0)
  {                                   // HOW IT WORKS?
     rem  = temp % 10;                // rem  = 153 (temp)  % 10                      ;   (153 % 10)=3
     sum  = sum +rem * rem * rem;     // sum  = 0   (sum)   +3(rem) * 3(rem) * 3(rem) ;   0 + (3*3*3*)= 27                      
     temp = temp / 10;                // temp = 153 (temp)  /10                       ;    153 / 10 = 15
  }
if (num==sum)                         // WHILE TEMP = 0 THAN STOP
{
    cout<<sum<<" & "<<num<<" is same";
     cout<<endl;
      cout<<sum<<" & "<<num;
       cout<<" is Armstrong";
}
else 
{
  cout<<sum<<" & "<<num<<" is not same";
   cout<<endl;
    cout<<sum<<" & "<<num;
     cout<<" is not Armstrong";     
}
getch();
}