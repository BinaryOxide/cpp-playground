#include<iostream>
#include<conio.h>
 using namespace std;

 class  class_addition_equal{
    
    int add_number;
    public: 
     class_addition_equal(){
        add_number = 0;}
     class_addition_equal(int passed_object_add_number){
      add_number = passed_object_add_number;  }
    void display_1(){
        cout << "add_number = " << add_number<< endl;}
    void operator+=(int passed_num_for_add_operator){
            add_number = add_number + passed_num_for_add_operator;}
 };
 class  class_subtraction_equal{
    int sub_number;
    public: 
     class_subtraction_equal(){
        sub_number = 0;}
     class_subtraction_equal(int passed_object_sub_number){
      sub_number = passed_object_sub_number;  }
    void display_2(){
        cout << "sub_number = " << sub_number<< endl;}
    void operator-=(int passed_num_for_sub_operator){
    sub_number = sub_number - passed_num_for_sub_operator;}
 };
 

 int main(){
    //------------------------------->main function start
    int addition_1 , addition_2 , subtraction_1 ,subtraction_2;

    cout <<"Enter the first number for addition :";
     cin >> addition_1;
     cout << endl;
     cout <<"Enter the second number for addition :";
     cin >> addition_2;
     cout << endl;

cout <<"addition :"<< endl;
     class_addition_equal object_add_number(addition_1) ;
object_add_number.display_1 ();

object_add_number += addition_2;
object_add_number.display_1 ();

 cout <<"Enter the first number for subtraction :";
     cin >> subtraction_1;
     cout << endl;
     cout <<"Enter the second number for subtraction :";
     cin >> subtraction_2;
     cout << endl;

  cout <<"subtraction :"<< endl;
    class_subtraction_equal object_sub_number(subtraction_1) ;
object_sub_number.display_2 ();

object_sub_number -= subtraction_2;
object_sub_number.display_2 ();

 }//-------------------------->main function end

/* ----------------------------->FLOW CHART START
Start
 |
 |--> class_addition_equal
 |     |--> Constructor
 |     |     |--> Initialize add_number to 0
 |     |--> Constructor with parameter
 |     |     |--> Initialize add_number to passed_object_add_number
 |     |--> display_1
 |     |     |--> Display add_number
 |     |--> operator+=
 |           |--> Add passed_num_for_add_operator to add_number
 |--> class_subtraction_equal
 |     |--> Constructor
 |     |     |--> Initialize sub_number to 0
 |     |--> Constructor with parameter
 |     |     |--> Initialize sub_number to passed_object_sub_number
 |     |--> display_2
 |     |     |--> Display sub_number
 |     |--> operator-=
 |           |--> Subtract passed_num_for_sub_operator from sub_number
 |
 |--> main
       |--> Input addition_1, addition_2
       |--> Create object_add_number with addition_1
       |--> Display object_add_number
       |--> Add addition_2 to object_add_number
       |--> Display object_add_number
       |--> Input subtraction_1, subtraction_2
       |--> Create object_sub_number with subtraction_1
       |--> Display object_sub_number
       |--> Subtract subtraction_2 from object_sub_number
       |--> Display object_sub_number
----------------------------------> FLOW CHART End
*/