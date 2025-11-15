#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class car{
    public: 
    int enginepower ;
    string brandname;

       //void display1(){                                       
         //--------------------------printing output              no need !
          // cout << "Egine power = " << enginepower << endl;     no need !
           // cout << "Brand = " << brandname << endl;            no need !        
       //}
};
class vehicle:public car{
    // engine power, brand name     
    public:
    int wheelSize;
    int display2(){

     cout << "Egine power = " << enginepower << endl;  
       cout << "Brand = " << brandname << endl;
         cout << "Bus wheel size = " << wheelSize;        
    }    
};
int main(){
    int power ;
    int wheel;
    string mainname;
    cout << "Enter engine power : "  ;
                 cin >> power ; 
                    cout << endl;
                        cout << "Enter brand name : " << endl ;
                          cin >> mainname ; 
                             cout << endl;

     cout <<"enter the wheel size of bus " ;
          cin >> wheel;
           cout << endl;                        

    vehicle something;
    something.enginepower = power;
    something.brandname = mainname ;
    something.wheelSize = wheel;
    something.display2();

    getch();
}