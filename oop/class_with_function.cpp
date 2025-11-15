#include <iostream>
#include <conio.h>
using namespace std;
class student{
    public :
    // adding common property
    int roll ;
    double gpa ;
    int display(){
        cout << "Roll : " << roll << "  " << "GPA : "<< gpa << endl ;
    }
};
int main(){
    // creating objects for student class
    student obito ;
    // using members of the class
    obito.roll = 1 ;
    obito.gpa = 4.55;
    obito.display() ;

 getch();
}