#include <iostream>
#include <conio.h>
#include<string>
using namespace std;

class student{

  private :
  string name;
  public:
  void setdisplay(string something ){

    name = something;

  }

  string getdisplay(){
    return name;
  }

};
int main(){
    student obito;
    obito.setdisplay("obito");
    cout<< obito.getdisplay();

 getch();
}