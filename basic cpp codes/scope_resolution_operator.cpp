#include <iostream>
#include <conio.h>
using namespace std;
int number = 10 ;

int main(){

    int number = 20 ;
    cout << "local variable   = " <<   number  << endl << endl ;
    cout << " global variable   = " << ::number  << endl << endl ;
    ::number = 30 ;
    cout << "change the value of global variable   = " << ::number  << endl << endl ;

  

    getch() ;
}