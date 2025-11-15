#include<iostream>
#include<conio.h>
using namespace std;

class student{
    public:

   const int admissionfee ;
   const int examfee ;
   int main_id;

    
     student( int adFeeNumber , int examfeenumber , int id )
     
     :admissionfee(adFeeNumber), examfee(examfeenumber){

       // admissionfee = adFeeNumber ;
       // examfee = examfeenumber

       main_id = id;
       cout << "id = " << main_id;
        cout << endl;
          cout << "admissionfee = " << adFeeNumber ; 
              cout << endl;
          cout << "exam fee = " << examfee;
    }
};
int main(){
  
  // 
  
  student member1(12000 , 4000 , 34092);

    getch();
}