// 1*2+2*2+3*2+   ... + num
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int num , mul = 1 , i;
cout << "Enter the last number : ";
cin >> num;

for (i = 1 ; i <= num ;  i++  )
    {
        mul *= i*i;
       if (i == num)
          {
              cout << i <<"^2"<< " = ";
          }
       else 
          {
              cout << i <<"^2" << " x " ;
          }
    }
cout <<  mul ;
getch();

}