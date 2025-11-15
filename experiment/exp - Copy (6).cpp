#include<iostream>
#include<conio.h>
 using namespace std;

 class Marks{
    int mark;
    public: 
    Marks(){
        mark = 0;
    }
    Marks(int m){
      mark = m;  
    }
    void YourMarkPlease(){
        cout << "number = " << mark<< endl;
    }
    void operator+=(int bonusmark){
    mark = mark + bonusmark;
    }

    friend void operator -= (Marks &curObj, int redmark);

 };
 void operator -= (Marks &curObj, int redmark){
 curObj.mark -=redmark;
 }
 int main(){

    Marks anilsmark(45) ;
anilsmark. YourMarkPlease ();

anilsmark += 20;
anilsmark. YourMarkPlease ();

anilsmark -= 20;
anilsmark. YourMarkPlease ();
    getch();
 }
