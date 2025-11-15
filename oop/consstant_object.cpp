#include<iostream>
#include<conio.h>
using namespace std;
class something{

  public:
  void display1() const;
  void display2();
};

void something::display1() const{

    cout << "calling by connstant function "<< endl;
}
void something::display2(){

    cout << "calling by non connstant function "<< endl;
}

int main(){

    const something objecta ;
             objecta.display1();

                      something objects;
                               objects.display2();
    getch();

}