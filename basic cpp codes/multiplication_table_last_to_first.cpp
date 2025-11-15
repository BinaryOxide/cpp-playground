#include <iostream>
#include <conio.h>
using namespace std ;
//usig do_while_loop
int main()
{   int n1,n2;
    cout << "Enter number : ";
    cin >>n1;

    cout<< "start from : ";
    cin >>n2;
  
int i =n2;
  do{
       cout <<n1<<"*"<<i<<"="<<n1*i<<endl;
       i--;
    } while (i>=n1);

  getch();
}