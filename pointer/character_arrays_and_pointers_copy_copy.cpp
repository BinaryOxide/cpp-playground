#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
void display(char *character){
  while (*character != '\0'){
    cout << *character ;
    character++;
  }
}
int main(){
  char character[6]="obito";
  display(character);
  
  getch();
}