// miltiplcation of odd num 
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int num , mul = 1 , i;
cout << "Enter the last number : ";
cin >> num;

for (i = 1 ; i <= num ;  i = i+2 )
    {
        mul *= i;
       if (i == num)
          {
              cout << i << " = ";
          }
       else 
          {
              cout << i << " X ";
          }
    }
cout <<  mul ;
getch();

}