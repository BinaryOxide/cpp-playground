#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
int main(){
  char c1[6]="obito";
  char *c2; c2 = c1;
  cout << c2 << endl;
   cout << c2[3] << endl;
  c2 = c2+2;
  cout << c2 << endl; 
  cout << c1 << endl; 

  c2 = c2-2;
  cout << c2[3] << endl;
  cout << c1[3] << endl;

  c2[0] = 'U';
  cout << c2 << endl; 
  cout << c1 << endl; 

  getch();
}