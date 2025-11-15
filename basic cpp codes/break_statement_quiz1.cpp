#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int i;
  for (i=1; i<=100; i+=2)
  {
    if(i>=13)
    {
        break;
    }
  cout << i<< "  ";
  }
    getch();
}