#include <iostream>
#include <conio.h>
using namespace std;
int main()
{  int n1 , n2;
   cout << "Enter 1st number :";
   cin >> n1;
                                    char op;
                                    cout << "Enter an operator :";
                                    cin >> op;
   cout << "Enter 2nd number :";
   cin >> n2;
   switch (op)
{
   case '+':
        cout <<  n1<< " + "<<n2 << " = "<< n1 + n2 ;
        break;
   case '-':
        cout <<  n1<< " - "<<n2 << " = "<< n1 - n2 ;
        break;
  case '*':
        cout <<  n1<< " * "<<n2 << " = "<< n1 * n2 ;
        break;
  case '/':
        cout <<  n1<< " / "<<n2 << " = "<< n1 / n2 ;
        break;
 default :
        cout << "Enter valid Arithmetic operator !";
        break;
}
        getch();
}