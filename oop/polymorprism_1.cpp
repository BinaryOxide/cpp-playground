#include<iostream>
#include<conio.h>
//#include<string>
using namespace std;
//-------------->function overriding
//-------------------------------> base class
class vehicle{
    public:
   virtual  int maindisplay(){
        cout<< endl<< endl<< "vehicle" << endl<< endl;
      }
};
//---------------------->using inheritance
class car :public vehicle{
    public:
     int maindisplay(){
             cout<< endl<< "class  car " << endl<< endl;
     }

};

int main(){
    vehicle *pointer;
      car object;
        pointer =&object;
          pointer ->maindisplay();
          
     getch();  
}
