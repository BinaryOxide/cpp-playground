#include<iostream>
#include<conio.h>
using namespace std;
class something{
    private: int num;
    //------------> add constructor
    public: something():num(20){}
      
      int operator++(){
        num = num+2;
      }
      void display(){
          cout << "Number = " << num;
      }
};  int main(){
     something object;
      ++object;
         object.display();
         getch();
}