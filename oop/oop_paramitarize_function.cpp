//------------->adding parametrized function to the class
#include <iostream>
#include <conio.h>
using namespace std;
class student{
    public :int roll ;
    double gpa ;
    int display(){
        cout << "Roll : " << roll << "  " << "GPA : "<< gpa << endl ;
    }
    //adding paramitarize funtcion

    void setvalue(int rollf , double gpaf){
      roll = rollf ;
      gpa =  gpaf;
      
    }
};
int main(){
   // creating objects for student class
    student obito ;
   
   obito.setvalue(3 , 4.55);
   obito.display();

  student konan ;
   
   konan.setvalue(2 , 4.85);
   konan.display();



   

   // ami ki bal leksi ! pc o buje na , amio buji na 

 getch();
}