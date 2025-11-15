#include<iostream>
#include<conio.h>
#include<string>
  using namespace std;
     class person1 {
         public:      
        virtual int mainfunction(){
            cout << "I'm from person1 class " << endl;
        }
     };   
     class student :public person1{
        public:            
              int mainfunction(){
                      cout << "I'm from student class " << endl;
                        cout << endl<< endl << endl;
              }
     };
//------------------------------------------------------</>
      class person2 {
         public:      
        virtual  int mainfunction(){
            cout << "I'm from person class " << endl;
        }
     };
    class child :public person2{
        public:     
            int mainfunction(){
                    cout << "I' from child class " << endl;
            }
     };
//--------------------------------------> adding main()
int main(){
        // student someoneA;someoneA.person1::mainfunction();

// --------------calling function using pointer 
    person1 *pointer ;
    student object;
       pointer =&object;
       pointer ->mainfunction();

 
       //  student someoneB;someoneB.mainfunction();
         //  child someoneD;someoneD.mainfunction();
           //   child someoneE;someoneE.person2::mainfunction();
            //     person2 *pointer2 ;child objecta;
            //        pointer2 =&objecta;pointer2 ->mainfunction();
           //          //printing the value of pointer
              //       cout << &pointer2 << endl;         
       getch();
}
       /*
       I'm from person1 class 
I'm from student class 



I'm from student class 



I' from child class
I'm from person class
I' from child class
0x62fef4

} 
*/