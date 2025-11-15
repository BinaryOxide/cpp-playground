#include <iostream>
#include <conio.h>
using namespace std;
class student{

    public :

    // adding common property

    int roll ;
    double gpa ;
};
int main(){
    // creating objects for student class

    student obito ;
    // using members of the class


    obito.roll = 1 ;
    obito.gpa = 4.55;

    // printing class value


    cout << "obito : "<< endl <<"Roll : " << obito.roll <<endl  ;
    cout <<"GPA : "<< obito.gpa << endl ;

    cout << endl << endl; 
    
    //----------------------------------------</>
    
    student itachi ;
    // using members of the class


    itachi.roll = 2 ;
    itachi.gpa = 4.29;

    // printing class value


    cout << "itachi : "<< endl <<"Roll : " << itachi.roll <<endl  ;
    cout <<"GPA : "<< itachi.gpa << endl ;



 getch();


}
