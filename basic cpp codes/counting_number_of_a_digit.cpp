#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int num, count=0;
  cout<< "Enter any number : ";
  cin >> num;
  while(num!=0)
       {
        num = num / 10;
        count++;
       }
cout << "Total number of digit "<< count ;
getch();
}