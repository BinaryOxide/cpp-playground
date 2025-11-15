//------------->constructor_special_function
#include <iostream>
#include <conio.h>
using namespace std;
class student{
    public :int roll ;
    double gpa ;
    int display(){
        cout << "Roll : " << roll << "  " << "GPA : "<< gpa << endl ;
    }
   // adding constructor
   student(int rollf , double gpaf){

    roll = rollf ;
    gpa = gpaf ;
   }
};
int main(){
   // creating objects for student class
    student obito(1 , 4.55) ;
   obito.display();

  student konan(2 , 4.85) ;
   konan.display();



   

   // ami ki bal leksi ! pc o buje na , amio buji na 

 getch();
}