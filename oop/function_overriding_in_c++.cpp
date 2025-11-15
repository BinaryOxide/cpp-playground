#include<iostream>
#include<conio.h>
#include<string>
  using namespace std;
     class person {
         public:
       
        int mainfunction(){
            cout << "I'm from person class " << endl;
        }
     };
    
     class student :public person{
        public:
             
              int mainfunction(){
                      cout << "I'm from student class " << endl;
              }
     };
   
     class child :public person{
        public:
           
            int mainfunction(){
                    cout << "I' from child class " << endl;
            }
     };

//--------------------------------------> adding main()
int main(){
         person someoneA;
         someoneA.mainfunction();

          student someoneB;
          someoneB.mainfunction();
            
            child someoneC;
            someoneC.mainfunction();


       getch();
} 