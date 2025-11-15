#include<iostream>
#include<conio.h>
using namespace std;
class dotoperator{

    public :

    
    void display() ;
};
    void dotoperator::display(){

        cout << "hello world "<< endl;
    }


int main(){

    dotoperator objecta;
    objecta.display();

    dotoperator *p = &objecta;
    p -> display();

    dotoperator objectb;
    dotoperator *d = &objectb;
    d -> display();

    getch();
}