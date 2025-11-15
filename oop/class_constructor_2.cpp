#include <iostream>
#include <conio.h>
using namespace std;
// declare class
class student{
    public :
    int roll ; double gpa;
    int display(){

        cout << "Roll : " << roll << "  " << "GPA : " << gpa << endl;
    }
      
      student(int rollf ,double gpaf){

        roll = rollf ;
        gpa  = gpaf ;
      }
};
int main(){
 student obito(1 , 3.45);
 obito.display();
 getch();

}