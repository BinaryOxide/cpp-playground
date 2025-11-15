#include <iostream>
#include <conio.h>

using namespace std;

class student{

  private :
  int roll;
  public:
  void setdisplay(int something ){

    roll = something;

  }

  int getdisplay(){
    return roll ;
  }

};
int main(){
    student obito;
    obito.setdisplay(33);
    cout<< obito.getdisplay();

 getch();
}