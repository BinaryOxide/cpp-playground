#include<iostream>
#include<conio.h>
#include<string>
  using namespace std;
     class person1 {
         public:
       
        vitual int mainfunction(){
            cout << "I'm from person1 class " << endl;
        }
     };
    
     class student :public person1{
        public:
             
            virtual  int mainfunction(){
                      cout << "I'm from student class " << endl;
                        cout << endl<< endl << endl;
              }
     };
     int main(){

       person1 *pointer ;
       student object;
        pointer =&object;
        pointer ->mainfunction();

       

        getch();
     }