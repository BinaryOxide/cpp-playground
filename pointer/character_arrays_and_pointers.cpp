#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
int main(){
  
  char name[10] ; //char name[10] = "someone";
  name[0] = 'o';  //char name[10] = {'s','o','m','e','o','n','e','/n',};
  name[1] = 'b';
  name[2] = 'i';
  name[3] = 't';
  name[4] = 'o';
  name[5] = '\0';
  name[6] = '1';
  cout << name << endl;
  int length = strlen(name);
  cout << "length of name : " << length << endl;
  int size  = sizeof(name);
  cout << "size of name ( in bytes ): " << size << endl;

  getch();
}