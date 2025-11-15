#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int  *varaiable_operator;
    varaiable_operator = new int;
    
    // The address will be output 
    cout << "address = " << varaiable_operator << endl;
    cout << endl << endl << endl;
    // The address will be output 
    
    *varaiable_operator = 25;
    cout << "value = " << varaiable_operator << endl;
    cout << "Because the address is showing, pointer(*) is not used"<< endl;
    cout << endl << endl << endl;

    // The value will be output ;
    cout << "value = " << *varaiable_operator << endl;
     cout << endl << endl << endl;
    // The mamory will be free
    delete varaiable_operator; 
    cout << "value after delete  = " << *varaiable_operator << endl;
    getch();
}